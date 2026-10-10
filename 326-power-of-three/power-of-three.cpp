class Solution {
public:
    bool isPowerOfThree(int n) {
        // bool ans=true;
        if(n<=0 || n==2 ) return false;
        while(n/3>=1){
            if(n%3!=0){
                return false;
            }
            n=n/3;
            if(n==2) return false;
        }
        return true;
    }
};