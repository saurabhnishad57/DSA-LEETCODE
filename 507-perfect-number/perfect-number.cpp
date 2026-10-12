class Solution {
public:
    bool checkPerfectNumber(int n) {
        int sum=0;
        if(n==1) return false;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i!=1 && i!=n/i){
                sum+=i+n/i;
                }else{

                sum+=i;
                }
            }
        }
        return (sum==n)?true:false;
    }
};

// class Solution {
// public:
//     bool checkPerfectNumber(int n) {
//         int sum=0;
//         for(int i=1;i<=n/2;i++){
//             if(n%i==0){
//                 sum+=i;
//             }
//         }
//         return (sum==n)?true:false;
//     }
// };