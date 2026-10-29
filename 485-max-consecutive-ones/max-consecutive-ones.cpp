class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,currCount=0;
        for(int x : nums){
            
            if(x==1){
                currCount++;
            }
            count=max(count,currCount);
            if(x==0){
                currCount=0;
            }
        }
        return count;
    }
};