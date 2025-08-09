class Solution {
public:
    void reverseString(vector<char>& s) {
      int i=0;
      int j=s.size()-1;
      for(int r=0;r<s.size();r++){
      if(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
        }
      }  
    }
};