class Solution {
public:
    bool isPalindrome(int x) {
if(x<0){
    return false;
}
long long num=x;
long long res=0;
while(x){
    int digit=x%10;
    res=res*10+digit;
    x/=10;

}
return res==num;
    }
};