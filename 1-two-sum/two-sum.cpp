// optimal approach =>hashing(map/sets)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){ //O(n)
            int first=nums[i];
            int sec=target-first;
            if(m.find(sec)!=m.end()){ //O(1) coz of stl file inbuilt 
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
};

// better approach O(nlogn) =>sorting
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         sort(nums.begin(),nums.end());
//         int st=0,end=nums.size()-1;
//         while(st<end){
//             int sum=nums[st]+nums[end];
//             if(sum<=target){
//                 ans.push_back(st++);
//                 ans.push_back(end--);
                
//             }else{
//                 end--;
//             }
//         }
//         return ans;
//     }
// };




// brute force approach O(logn^2)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                 }
//             }
//         }
//         return ans;
//     }
// };