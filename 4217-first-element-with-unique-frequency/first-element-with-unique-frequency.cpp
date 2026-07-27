class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        map<int,int>freq_count;
        for(auto i : freq){
            freq_count[i.second]++;
        }
        for(int i=0;i<n;i++){
            if(freq_count[freq[nums[i]]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};