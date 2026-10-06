class Solution {
public:
    //O(n)
    int largestRectangleArea(vector<int>& heights) {
       int n=heights.size();
       vector<int> right(n,0);
       vector<int> left(n,0);
       stack<int> s;

       //right smaller element
       for(int i=n-1;i>=0;i--){
        while(s.size()>0 && heights[s.top()]>=heights[i]){
            s.pop();
        }
        right[i]=s.empty()?n:s.top();
        s.push(i);
       }
       //khali karo jo chhut gya stack me
       while(!s.empty()){
        s.pop();
       }
       //left smaller element
       for(int i=0;i<n;i++){
        while(s.size()>0 && heights[s.top()]>=heights[i]){
            s.pop();
        }
        left[i]=s.empty()?-1:s.top();
        s.push(i);
       }

       int ans=0;
       for(int i=0;i<n;i++){
        int width=right[i]-left[i]-1;
        int currArea=heights[i]*width;
        ans=max(ans,currArea);
       }
       return ans;
    }
};


// class Solution {
// public:
//     //O(n)
//     int largestRectangleArea(vector<int>& heights) {
//         int n=heights.size();
//         vector<int> left(n,0); //left smaller nearest
//         vector<int> right(n,0); //right smaller nearest
//         stack<int> s;

//         //right smaller  O(n)
//         for(int i=n-1;i>=0;i--){
//             while(s.size()>0 && heights[s.top()]>=heights[i]){
//                 s.pop();
//             }
//             right[i]=s.empty()?n:s.top();
//             s.push(i);
//         }
//         while(!s.empty()){
//             s.pop();
//         }
//         //left smaller O(n)
//         for(int i=0;i<n;i++){
//             while(s.size()>0 && heights[s.top()]>=heights[i]){
//                 s.pop();
//             }
//             left[i]=s.empty()?-1:s.top();
//             s.push(i);
//         }
//         O(n)
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int width=right[i]-left[i]-1;
//             int currArea=heights[i]*width;
//             ans=max(ans,currArea);
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int area=0;
//         int maxArea=0;
//         for(int i=0;i<heights.size();i++){
//             for(int j=i;j<heights.size();j++){
//                 area=heights[i]*heights[j-i-1];
//                 if(area>maxArea){
//                     maxArea=area;
//                 }
//             }
//         }
//         return maxArea;
//     }
// };