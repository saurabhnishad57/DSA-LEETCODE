class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int x: nums2){
            freq[x]++;
        }
        for(int x: nums1){
            if(freq.find(x)!=freq.end()){
                if(freq.find(x)->second>0){
                    ans.push_back(freq.find(x)->first);
                    freq[x]--;
                }
            }
        }
        return ans;
    }
};