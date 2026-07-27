class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int a = 0;
        int b = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(mx < nums[i]*nums[j]){
                    mx = nums[i]*nums[j];
                    a = i;
                    b = j;
                }
            }
        }
        return (nums[a] - 1)*(nums[b] - 1);
       
    }
};