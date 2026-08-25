class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(auto i : nums){
            if(i % k == 0){
                st.insert(i);
            }
        }
        int ans = k;
        for(auto i : st){
            if(i != ans){
                return ans;
            }
            ans = ans + k;
        }
        return ans;
    }
};