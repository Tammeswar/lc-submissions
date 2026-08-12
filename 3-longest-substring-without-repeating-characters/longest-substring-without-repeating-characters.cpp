class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char,int>mpp;
        int ans = 0;
        int windowstart = 0;
        for(int windowend = 0;windowend<n;windowend++){
            mpp[s[windowend]]++;
            while(mpp[s[windowend]] > 1){
                mpp[s[windowstart]]--;
                windowstart++;
            }
            ans = max(ans, windowend - windowstart + 1);

        }
        return ans;
    }
};