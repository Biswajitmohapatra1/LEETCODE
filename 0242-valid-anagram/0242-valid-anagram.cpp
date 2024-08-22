class Solution {
public:
    bool isAnagram(string s, string t) {
    // Basically 256 ascii character hote hai toh ham agar string ke hisab se character ki
    // ascii mapping karedenge means character ke ascii code ke position pe 1 aur baki 0
    // rehne do aur agar dusra string anagram hoga toh woh bhi same positions pe 1 hoga
    // toh usko increment karenge toh 2 hojayega aur decrement karenge toh 0 aur sab zero hua
    // toh valid anagram hoga
       int frequencytable[256]={0};
       for(int i=0;i<s.length();i++)
       {
        frequencytable[s[i]]++;
       }
       for(int i=0;i<t.length();i++)
       {
        frequencytable[t[i]]--; 
// dimaag mai ayega ki t[i] ko ++ karke !=2 wala condition lagaye lekin for example 1 baki 
// character satisfy kar jayenge lekin a 3barr aaraha toh woh toh 6 hojayega so different
// character ke liye ham akhir condition nahi bana sakte so lekin jitna baar aarha 
// utna baar remove karne ka idea kaam karega 
       }
    //    cout<<frequencytable[97]<<endl;
       for(int i=0;i<256;i++)
       {
        // important ==0 karenge toh dusre example pe do char same hai toh pehle ith element
        // 0 aajayega toh return true kardega
           if(frequencytable[i]!=0)
           {
            return false;
           }
       }
       return true;
    }
};