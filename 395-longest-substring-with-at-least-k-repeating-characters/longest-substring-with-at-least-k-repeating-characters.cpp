class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        int ans = 0;

        for (int start = 0; start < n; start++) {
            map<char, int> mpp;

            for (int i = start; i < n; i++) {
                mpp[s[i]]++;

                bool valid = true;

                for (auto x : mpp) {
                    if (x.second < k) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    ans = max(ans, i - start + 1);
                }
            }
        }

        return ans;
    }
};