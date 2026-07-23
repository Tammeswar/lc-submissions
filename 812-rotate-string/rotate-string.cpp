class Solution {
public:
    void rotate(string &s){
        int n = s.size();
        char last = s[0];
        for(int i=1;i<n;i++){
            s[i-1] = s[i];
        }
        s[n-1] = last;
        
    }
    bool rotateString(string s, string goal) {
        int n = s.size();
        
        if(s == goal) return true;
        for(int i=0;i<s.size();i++){
             rotate(s);
             cout << s << " "<<goal <<endl;
             if(s == goal){
                return true;
             }
        }
        return false;
    }
};

// awhwhd
// whwhda
// hwhdaw
// whdawh
// hdawhw
// dawhwh
// awhwhd