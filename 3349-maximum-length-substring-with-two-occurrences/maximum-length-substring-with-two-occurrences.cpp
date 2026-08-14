class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        int ans = INT_MIN;
        int windowstart = 0;
        for(int windowend = 0;windowend < s.size();windowend++){
            mpp[s[windowend]]++;

            while(mpp[s[windowend]] > 2){
                
                mpp[s[windowstart]]--;
                if(mpp[s[windowstart]] == 0){
                    mpp.erase(s[windowstart]);
                }
                windowstart++;
            }

            ans = max(ans, windowend - windowstart + 1);
        }
        return ans;
    }
};