class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1; //nums2 ke saare ele store
        set<int> s2; //common ele
        for(int x : nums2){
            s1.insert(x);
        }
        for(int x: nums1){
            if(s1.find(x)!=s1.end()){
                s2.insert(x);
            }
        }
        vector<int> ans;
        for(int x: s2){
            ans.push_back(x);
        }
        return ans;
    }
};


// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int> s;
//         int j=0;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
//                     s.insert(nums2[j]);
//                 }
//             }
//         }
//         vector<int> ans;
//         for(int x: s){
//             ans.push_back(x);
//         }
//         return ans;
//     }
// };