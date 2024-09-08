class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        // sort kardene se example 1 will be like flight flow flower then dry run
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
           ans.push_back(last[i]);
        }
        return ans;
    }
};