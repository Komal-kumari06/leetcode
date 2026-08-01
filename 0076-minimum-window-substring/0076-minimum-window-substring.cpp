class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int high=0;
        int low=0;
        int start=0;
        int minlen=INT_MAX;
        unordered_map<char,int>str;
        unordered_map<char,int>tar;
        for(char c: t){
            tar[c]++;
        }
        for(int high=0; high<n; high++){
            str[s[high]]++;
            while(tocheck(str,tar)){
                int len= high-low+1;
                if(minlen>len){
                    minlen=len;
                    start=low;
                }
                str[s[low]]--;
                low++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
    
    bool tocheck(const unordered_map<char,int>& str,
                 const unordered_map<char,int>& tar){

        for(const auto& it : tar){
            char ch = it.first;
            int freq = it.second;

            if(str.find(ch) == str.end() || str.at(ch) < freq){
                return false;
            }
        }
        return true;
    }

    
};