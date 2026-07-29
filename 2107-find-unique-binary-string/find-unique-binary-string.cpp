class Solution {
public:
    void Generate(int n, string &ds, vector<string>& ans){
        if(n == ds.size()){
            ans.push_back(ds);
            return;
        }
        char choices[2] = {'0', '1'};
        for(int i=0;i<2;i++){
            ds.push_back(choices[i]);
            Generate(n, ds, ans);
            ds.pop_back();
        }
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        vector<string>ans;
        string ds = "";
        Generate(n, ds, ans);
        set<string>check;
        for(auto i : nums){
            check.insert(i);
        }
        for(auto i : ans){
            if(check.find(i) == check.end()){
                return i;
            }
        }
        return "";

        
    }
};