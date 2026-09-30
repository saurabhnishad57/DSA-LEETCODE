class Solution {
public:
    int addDigits(int num) {
    while(num >= 10) {

        int sum = 0;

        while(num != 0) {
            // digit sum
            sum+=num%10;
            num/=10;
        }

        num = sum;
    }

    return num;
    }
};


// class Solution {
// public:
//     int addDigits(int num) {
//         int sum=0;
//         while(num!=0){
//             sum=sum+num%10;
//             num=num/10;
//         }
//         int x=0;
//         if(sum>9){
//         while(sum>=10){
//             x=x+sum%10;
//             sum=sum/10;
//         }
//         return x+sum;
//         }
//         return sum;
//     }
// };