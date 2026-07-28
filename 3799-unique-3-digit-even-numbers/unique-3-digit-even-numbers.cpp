class Solution {
public:
    void recursion(vector<int>& digits, vector<int>& ds, vector<int>& mpp, set<int>& ans){
        if(ds.size() == 3){
            int num = ds[0] * 100 + ds[1] * 10 + ds[2];
            ans.insert(num);
            return;
        }

        for(int i=0;i<digits.size();i++){
            if(mpp[i] == 0){
                if(ds.size() == 0 && digits[i] == 0) continue;

                if(ds.size() == 2 && digits[i] % 2 != 0) continue;
                ds.push_back(digits[i]);
                mpp[i] = 1;
                recursion(digits, ds, mpp, ans);
                ds.pop_back();
                mpp[i] = 0;
            }
        }
    }
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int>ds;
        vector<int>mpp(n, 0);
        set<int>ans;
        recursion(digits, ds, mpp, ans);
       // vector<int>res(ans.begin(), ans.end());
        return ans.size();
    }
};