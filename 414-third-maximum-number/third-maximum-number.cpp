class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int> v;
        for(int x: nums){
            if(v.empty() || v.back()!=x){
                v.push_back(x);
            }
        }   
        if(v.size()>=3){
            return v[2];
        }
        return v[0];
    }
};