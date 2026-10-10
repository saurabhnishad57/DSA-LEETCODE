class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char,int> m; //char , freq store
       queue<int> q;  //idx store
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                q.push(i);
            }
            m[s[i]]++;

            while(q.size()>0 && m[s[q.front()]]>1){
                q.pop();
            }
        }
        return q.empty()?-1:q.front();
    }
};


// class Solution {
// public:
//     int firstUniqChar(string s) {
//        queue<int> q;

//         for(int i = 0; i < s.length(); i++) {
//             q.push(i);
//         }
//         int i=0;
//         int count=0;
//         while(!q.empty() && q[i]!=q[i+1]){
//             string unique=q[i];
//             while(unique=q[i] && i<s.length()){
//                 count++;
//                 i++;
//             }
//             i++;
//         }
//         return count;
//     }
// };