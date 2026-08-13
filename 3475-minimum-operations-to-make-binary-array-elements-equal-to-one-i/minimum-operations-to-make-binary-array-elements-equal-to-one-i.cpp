class Solution {
public:
    // int fun(vector<int>& nums){
    //     for(int i=0;i<nums.size();i++){
    //         if(i == 0){

    //         }
    //     }
    // }
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            
                if(nums[i] == 0){
                    for(int j=i;j<i+3;j++){
                        if(i + 2 >= n) return -1;
                        if(nums[j] == 0){
                            nums[j] = 1;
                        }
                        else{
                            nums[j] = 0;
                        }
                    }
                    
                    cnt++;
                }

            //int temp = fun(nums);
        }
        return cnt;
    }
};