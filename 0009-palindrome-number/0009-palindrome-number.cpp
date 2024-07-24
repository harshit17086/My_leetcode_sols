class Solution {
public:
     bool isPalindrome(long long int  x)
 {
    string str;
     stringstream ss;
     ss<<x;
     str=ss.str();

     long long int n=str.length();
     for(int i=0;i<n;i++)
     {
        // if(str[i]==str[n-1-i])
         //{
           //  return true;
         //}
        if(str[i]!=str[n-1-i])
         {
            return false;
         }
         if(str[0]=='-')
         {
             return false;
         }
         
     }
     

   return true;
  } 
  
};