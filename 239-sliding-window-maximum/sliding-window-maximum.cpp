class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  //idx
        vector<int> res;

        //1st window
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        //next aage ki window
        for(int i=k;i<nums.size();i++){
            res.push_back(nums[dq.front()]);
            //remove ele which are not part of curr window
            while(dq.size()>0 && dq.front()<=i-k){
                dq.pop_front();
            }
            //remove smaller values;
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> ans(nums.size()-k+1,0);
//         int maximum=nums[0];
//         for(int i=0;i<=nums.size()-k;i++){
//             for(int j=i;j<k+i;j++){
//                 maximum=max(nums[j],maximum);
//             }
//             ans[i]=max(maximum,nums[i]);
//         }
//         return ans;
//     }
// };