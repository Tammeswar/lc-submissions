class Solution {
public:
    string smallestPalindrome(string s) {
        
        int n = s.size();
        string left = s.substr(0, n/2); // dac
        sort(left.begin(), left.end());//acd
        string ans = left;//acd

        if(n%2 == 1){
            ans = ans + s[n/2];
        }
        reverse(left.begin(), left.end());
        ans = ans + left;
        
        return ans;
    }
};