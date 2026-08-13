class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k <= 1) return 0;
        int start = 0;
        long long pro = 1;
        int cnt = 0;
        for(int windowend = 0;windowend < n; windowend++){

            pro = pro * nums[windowend];
            while(pro >= k){
                pro = pro / nums[start];
                start++;
            }

            if(pro < k){
                cnt = cnt + (windowend - start + 1);
            }
        }
        return cnt;
    }
};