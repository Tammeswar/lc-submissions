class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int max_ones_count = 0;
        int windowstart = 0;
        int ans = -1;
        for(int windowend = 0;windowend < n;windowend++){

            if(nums[windowend] == 1){
                    max_ones_count++;
                }
            if((windowend - windowstart + 1) - max_ones_count > k){
                if(nums[windowstart] == 1){
                    max_ones_count--;
                }
                windowstart++;
            }
            ans = max(ans, windowend - windowstart + 1);

        }
        return ans;
    }
};