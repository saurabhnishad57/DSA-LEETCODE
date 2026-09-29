class Solution {
public:
    int search(vector<int> &nums,int target){
        int st=0,end=nums.size()-1,isFound=false;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                isFound=true;
                return mid;
            }else if(target<nums[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        // if(!isFound){

        // }
        return st;
    }
    int searchInsert(vector<int>& nums, int target) {
        int ans=search(nums,target);
        return ans;

    }
};