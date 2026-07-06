class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>temp(n, 0);
        int ans = -1;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j] == 1){
                    cnt++;
                }
            }
            ans = max(ans, cnt);
            temp[i] = cnt;
        }
    int idx = 0;
        for(int i=0;i<temp.size();i++){
            
            if(temp[i] == ans){
                idx = i;
                break;
            }
        }

        return {idx, ans};
    }
};