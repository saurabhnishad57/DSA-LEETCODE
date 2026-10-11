class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0) return false;
        if(n==1) return true;
        while(n/2>=1){
            if(n%2!=0){
                return false;
            }
            n=n/2;
            if(n==1) return true;
        }
        return true;



        // return n>0 && ((n&(n-1))==0);
    }
};