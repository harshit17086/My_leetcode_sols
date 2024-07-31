class Solution {
public:
    int divide(int dividend, int divisor) {
        
       long long int a = dividend;
     long long int b = divisor;
    
        long long int c=a/b;
         if(a==INT_MIN && b==-1)
     {
        return INT_MAX;
     }
        return c;
    }
};