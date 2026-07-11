class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int cnt = 0;
        int k = n/3;
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            if(k > 0){
            if(cnt == 0){
                cnt = cnt + 1;
            }
            else{
                sum = sum + piles[i];
                cnt = cnt - 1;
                k = k - 1;
            }
        }
        }
        return sum;
    }
};