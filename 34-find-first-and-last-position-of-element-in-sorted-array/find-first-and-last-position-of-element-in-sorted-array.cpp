class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int a = -1, b = -1;
        while(l <= r){
            if(a == -1){
                if(nums[l] == target){
                    a = l;
                }
                else{
                    l++;
                }
            }
            if(b == -1){
                if(nums[r] == target){
                    b = r;
                }
                else{
                    r--;
                }
            }
            if(a != -1 && b != -1){
                break;
            }
        }

        
        return {a, b};
    }
};