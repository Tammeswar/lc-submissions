class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int start = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
            while(mpp[nums[i]] > k){
                mpp[nums[start]]--;
                start++;
            }
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};