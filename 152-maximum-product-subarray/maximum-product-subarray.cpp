class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = 1;
        int currMin = 1;
        int maxProd = INT_MIN;

        for(int x : nums) {

            int a = x * currMax;
            int b = x * currMin;

            currMax = max({x, a, b});
            currMin = min({x, a, b});

            maxProd = max(maxProd, currMax);
        }
        return maxProd;
    }
};