class Solution {
public:
    int countSeniors(vector<string>& details) {
        int Count = 0;
        for (auto ele : details) {
            char tens = ele[11];
            char ones = ele[12];
            if (tens > '6' || (tens == '6' && ones > '0')) {
                Count++;
            }
        }
        return Count;
    }
};