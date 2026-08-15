class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int>mpp;
        int windowstart = 0;
        int ans = -1;
        int max_letter_count = 0;
        for(int windowend = 0;windowend < n;windowend++){
            mpp[s[windowend]]++;
            max_letter_count = max(max_letter_count, mpp[s[windowend]]);
            if((windowend - windowstart + 1) - max_letter_count > k){
                mpp[s[windowstart]]--;
                windowstart++;
            }
            ans = max(ans, windowend - windowstart + 1);
        }
        return ans;
    }
};