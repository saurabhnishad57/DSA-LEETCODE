class Solution {
public:
    bool isPerfectSquare(int n) {
        for(long long int i=1;i*i<=n;i++){
            if(i*i==n){
                return true;
            }
        }
        return false;
    }
};