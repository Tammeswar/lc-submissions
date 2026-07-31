class Solution {
public:
    int strStr(string haystack, string needle) {    
    int l = 0;
	map<string, int>mpp;
	string temp = "";
	for(int i=0;i<haystack.size();i++){
	    temp.push_back(haystack[i]);
	    
	    if(temp.size() == needle.size()){
	        if(mpp.find(temp) == mpp.end()){
	            mpp[temp] = l;
	        }   
	        temp.erase(temp.begin());
	        l++;
	        
	    }
        for(auto i : mpp){
            if(i.first == needle){
                return i.second;
            }
        }
	}
    return -1;
    }
};


   