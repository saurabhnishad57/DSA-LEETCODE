class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for(char x: s){
            freq1[x]++;
        }
        for(char y: t){
            freq2[y]++;
        }
        char ans=' ';
        for(int i=0;i<s.size();i++){
            if(freq2.find(s[i])!=freq2.end()){
                freq2[s[i]]--;
            }
        }
        for(char ch: t){
            if(freq2[ch]>0){
                ans=ch;
                break;
            }
        }
        return ans;
    }
};