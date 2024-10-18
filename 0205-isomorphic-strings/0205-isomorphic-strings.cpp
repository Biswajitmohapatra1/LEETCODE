class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        // for mapping an empty array is taken
        bool ismapped[256]={0};
        // we can mark true or false based on status of mapping
        //basically place a of add in hash array where e of egg is located and so on
        for(int i=0;i<s.size();i++)
        {
            // mark the position true of string t from which the elements are mapped
            if(hash[s[i]]==0&&ismapped[t[i]]==0)
            {
             hash[s[i]]=t[i];
                ismapped[t[i]]=true;
            }
        }
        // now check if element of t are present in hash serailly or not
        for(int i=0;i<s.size();i++)
        {
            if(hash[s[i]]!=t[i])
            {
             return false;
            }
        }
        return true;
    }
};