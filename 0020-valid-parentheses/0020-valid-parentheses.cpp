class Solution {
public:
    bool isValid(string s) {
//the approach is to push the opening bracketts to stack and pop if any closing brackett is 
        //found
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
         if(ch=='('||ch=='{'||ch=='[')
         {
               st.push(ch);
         }
            else
            {
             if(!st.empty())
             {
                 if(ch==')'&&st.top()=='(')
                 {
                  st.pop();
                 }
                 else if(ch=='}'&&st.top()=='{')
                 {
                  st.pop();
                 }
                 else if (ch==']'&&st.top()=='[')
                 {
                  st.pop();
                 }
                 else
                 {
             return false;
                     }
             }
                else
                {
           return false;
                }
            }
            
        }
       if(st.size()==0)
       {
return true;
       }
        else
        {
return false;
        }
    }
};