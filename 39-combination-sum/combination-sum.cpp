class Solution {
public:
    set<vector<int>> s;
    void getAllCombinations(vector<int>& arr,int idx,int  tar,vector<vector<int>> &ans,vector<int> &combin){
        if(idx==arr.size() || tar<0) return;
        if(tar==0){
            if(s.find(combin)==s.end()){
                ans.push_back(combin);
                s.insert(combin);

            }
            return;
        }
        combin.push_back(arr[idx]);
        //single choice
        getAllCombinations(arr,idx+1,tar-arr[idx],ans,combin);
        //multiple choice
        getAllCombinations(arr,idx,tar-arr[idx],ans,combin);
        //backtrack
        combin.pop_back();
        //exclusion choice
        getAllCombinations(arr,idx+1,tar,ans,combin);

    }
    vector<vector<int>> combinationSum(vector<int>& arr  , int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        int idx=0;
        getAllCombinations(arr,idx,target,ans,combin);
        return ans;
    }
};