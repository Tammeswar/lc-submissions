class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            map<char,int>mpp;
            for(int j=i;j<n;j++){
                mpp[s[j]]++;
                if(mpp[s[j]] <= 2){
                    
                    ans = max(ans, j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};