class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(auto i : nums){
            if(i < 0) continue;
            mpp[i]++;
        }
        for(int i=1;i<INT_MAX;i++){
            if(mpp.find(i) == mpp.end()){
                return i;
            }
        }
        return -1;
    }
};