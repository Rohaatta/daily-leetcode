class Solution {
public:
    bool isSubsequence(string s, string t) {
       int r=0,h=0;
       while(r<s.size() && h<t.size()){
       if(s[r]==t[h]){
       r++;
       }
       h++;}
       return r==s.size();
       }
}; 
    