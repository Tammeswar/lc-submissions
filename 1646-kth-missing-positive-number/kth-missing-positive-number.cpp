class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        map<int, int> mpp;

        for (auto i : arr) {
            mpp[i]++;
        }

        vector<int> ans;

        int mx = *max_element(arr.begin(), arr.end());

        for (int i = 1; i <= mx; i++) {
            if (mpp.find(i) == mpp.end()) {
                ans.push_back(i);
            }
        }

        int x = mx + 1;

        while (ans.size() < k) {
            if (mpp.find(x) == mpp.end()) {
                ans.push_back(x);
            }
            x++;
        }

        return ans[k - 1];
    }
};