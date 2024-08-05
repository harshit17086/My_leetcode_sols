class Solution {
public:
    int arrangeCoins(int n) {
        int k=1;
        if(n==1)
        {
            return 1;
        }
          while(n>0)
          {
              k++;
              n-=k;
          }
        return k-1;
    }
};