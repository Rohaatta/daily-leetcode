class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(true){
            int summ=0;
            while(n!=0){
                int digit=n%10;
                summ+=digit*digit;
                n=n/10;
            }

            if(summ==1)return true;

            if(s.find(summ)!=s.end())return false;
            s.insert(summ);

            n=summ;
        }
    }
};