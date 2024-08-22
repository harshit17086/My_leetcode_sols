class Solution {
public:
    int findComplement(int num) {
        
        vector<int> conver;
        vector<int> binar;
        
        while (num != 0) {
            int bit = num & 1;
            conver.push_back(bit);
            num = num >> 1;
        }
        
        if (conver.empty()) {
            conver.push_back(0);
        }
        
        for (int i = conver.size() - 1; i >= 0; i--) {
            binar.push_back(conver[i]);
        }
        
        for (int i = 0; i < binar.size(); i++) {
            if (binar[i] == 0) {
                binar[i] = 1;
            } else if (binar[i] == 1) {
                binar[i] = 0;
            }
        }
        
        int deci = 0;
        for (int i = 0; i < binar.size(); i++) {
            if (binar[i] == 1) {
                deci += pow(2, binar.size() - 1 - i);
            }
        }
        
        return deci;
    }
};

    