class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        string word="";
        int i=0;
        while(s[i]==' '){
            i++;
        }
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        return word.length();
    }
};