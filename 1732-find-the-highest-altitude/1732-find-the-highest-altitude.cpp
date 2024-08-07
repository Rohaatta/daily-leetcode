class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int cur=0;
       int high=0;
       for(int i=0;i<gain.size();i++){
        cur+=gain[i];
        high=max(high ,cur);
       } 
       return high;
    }
};