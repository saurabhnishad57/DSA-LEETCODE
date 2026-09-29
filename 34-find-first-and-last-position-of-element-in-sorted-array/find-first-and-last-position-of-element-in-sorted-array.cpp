class Solution {
public:
    int first(vector<int>& nums,int target){
        int st=0,end=nums.size()-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums,int target){
        int st=0,end=nums.size()-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                ans=mid;
                st=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target));
        ans.push_back(last(nums,target));
        return ans;
    }
};