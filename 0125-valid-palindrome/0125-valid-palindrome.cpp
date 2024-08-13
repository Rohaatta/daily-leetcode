class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        string b;
        string c;
        for(int i=0;i<s.size();i++){
            if(islower(s[i])|| isdigit(s[i])){
                    a+=s[i];
                    b+=s[i];
            }
            else if(isupper(s[i])){
                c=tolower(s[i]);
                a+=c;
                b+=c;
            }}
            reverse(a.begin(),a.end());
            if(a==b)
                return true; 
         return false;
    }
};