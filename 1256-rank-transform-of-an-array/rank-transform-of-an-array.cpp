class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
    vector<int>res;
    set<int>st;
        for(auto i : arr){
            st.insert(i);
        }
        map<int,int>mpp;
        int j = 0;
        for(auto i : st){
            mpp[i] = ++j; 
        }
        
        for(auto i : arr){
            if(mpp.find(i) != mpp.end()){
                res.push_back(mpp[i]);
            }
        }
        return res;
  
    }
};