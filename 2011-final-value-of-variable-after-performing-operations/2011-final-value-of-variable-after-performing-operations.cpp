class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
           int x = 0;
           for(int i = 0 ; operations.size()>i;  i++){
            if (operations[i] == "++X" || operations[i] == "X++")
            x++;
            else 
             x--;
           }
           return x;
    }
};