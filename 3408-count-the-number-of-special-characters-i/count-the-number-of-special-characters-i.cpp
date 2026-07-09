class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        int n = word.size();
        int ans = 0;
        unordered_map<char,int>mpp;
        for(auto i : word){
            mpp[i] = 0;
        }
        for(int i = 0;i < n;i++){
            
            if(islower(word[i]) && mpp.find((char)toupper(word[i])) != mpp.end() && mpp[word[i]] != 1){

                ans = ans + 1;
                mpp[word[i]] = 1;
                
            }
        }
        return ans;
    }
};