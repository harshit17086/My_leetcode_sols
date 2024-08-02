class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),count=0,wone=0;
        for(auto ele :nums){
            if(ele==1)count++;
        }
        if(count==0||count==n)return 0;
        for(int i=0;i<count;i++){
            wone+=nums[i];
        }
        int maxx=wone;
        for(int i=0;i<n;i++){
           wone-=nums[i];
           wone+=nums[(i+count)%n];
           maxx=max(wone,maxx);
        }
        return count-maxx;
    }
};