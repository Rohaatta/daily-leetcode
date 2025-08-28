class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        string doublestr=s+s;
        for(int i =1;i<n;i++){
            string result=doublestr.substr(i,n);
            if(result==s){
                return true;
            }
        }
         return false;
    }
};