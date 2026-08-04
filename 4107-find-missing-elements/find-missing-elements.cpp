class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        sort(nums.begin(), nums.end());
        vector<int>ans;
        int a = nums[0];
        int b = nums[n-1];
        for(int i =a;i<b;i++){
            if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end());

        return ans;
    }
};