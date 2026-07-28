class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        // for(int i=0;i<n;i++){
        //     if(arr[i] < 0){
        //         arr[i] = -arr[i];
        //     }
        // }
        for(int i=1;i<n-1;i++){
            if(arr[i+1] - arr[i] != diff){
                return false;
            }
        }
        return true;
    }
};