class Solution {
public:
      string addingstrings(string num1,int p1,string num2,int p2,int carry=0)
      {
//This block executes when both pointers have gone past the beginning 
//of their respective strings (p1 < 0 && p2 < 0), meaning all digits have 
//been processed.It then checks if there's a remaining carry from the last 
//addition step.If there is a carry, it returns it as a single-character string 
//(by converting it to a char using carry + '0').If no carry, it returns an empty 
//string, indicating the addition is complete.
        if(p1<0 && p2<0)
        {
             if(carry!=0)
             {
                //convert to string function takes input as length and integer
                return string(1,carry+'0');
             }
             return "";
        }
        //converting to integer by subtracting '0' and to string by adding '0'
        int n1= (p1>=0 ? num1[p1] : '0')-'0';
         int n2= (p2>=0 ? num2[p2] : '0')-'0';
         int sum=n1+n2+carry;
         int digit=sum%10;
          carry=sum/10;
         string ans;
         ans.push_back(digit+'0');
         ans+=addingstrings(num1,p1-1,num2,p2-1,carry);
         return ans;
      }
    string addStrings(string num1, string num2) {
        //here we are traversing from reverse and passing p1 and p2 as indexes
        string ans=addingstrings(num1,num1.size()-1,num2,num2.size()-1,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};