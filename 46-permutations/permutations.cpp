class Solution {
public:
void FindPermutations(vector<int>& nums, vector<int>& ds, vector<int>& mpp, vector<vector<int>>& ans){

    if(ds.size() == nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(mpp[i] == 0){
            ds.push_back(nums[i]);
            mpp[i] = 1;
            FindPermutations(nums, ds, mpp, ans);
            ds.pop_back();
            mpp[i] = 0;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int>ds;
        vector<int>mpp(n, 0);
        vector<vector<int>>ans;
        FindPermutations(nums, ds, mpp, ans);
        return ans;
    }
};