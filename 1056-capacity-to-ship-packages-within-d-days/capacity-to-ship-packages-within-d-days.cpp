class Solution {
public:
    int fun(vector<int>& nums, int x){
        int days = 1;
        int load = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] + load > x){
                days = days + 1;
                load = nums[i];
            }
            else{
                load = load + nums[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            int temp = fun(weights, mid);
            if(temp <= days){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};