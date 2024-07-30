class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ss=0,ds=0;
        for(auto ele:nums){
            if(ele>9)ds+=ele;
            else ss+=ele;
        }
        if(ds==ss)return false;
        return true;
    }
};