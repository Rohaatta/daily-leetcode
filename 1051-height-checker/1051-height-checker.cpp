class Solution {
public:
    int heightChecker(vector<int>& hei) {
        vector<int>arr=hei;
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=hei[i])
            ans++;
        }
        return ans;
        
    }
};