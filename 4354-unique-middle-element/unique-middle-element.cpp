class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = nums[n/2];
        map<int,int>mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        int ans = mpp[mid];
        if(ans == 1) return true;

        return false;
        
    }
};