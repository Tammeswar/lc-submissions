class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<int>nums;
        stack<string>strs;
        int num = 0;
        string curr = "";
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }
            else if(s[i] == '['){
                nums.push(num);
                strs.push(curr);
                num = 0;
                curr = "";
            }
            else if(s[i] == ']'){
                
                int repeat = nums.top();
                nums.pop();
                string previous = strs.top();
                strs.pop();
                string temp = "";
                for(int i=0;i<repeat;i++){
                    temp = temp + curr;
                }
                
                curr = previous + temp;
            }
            else{
                curr = curr + s[i];
            }   
        }
        return curr;
    }
};