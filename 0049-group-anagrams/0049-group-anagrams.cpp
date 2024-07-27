class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> hi;
        for(auto ele : strs){
            string p=ele;
            sort(p.begin(),p.end());
            hi[p].push_back(ele);
        }
        vector<vector<string>>anss;
        for(auto ele:hi){
            anss.push_back(ele.second);
        }
        return anss;
    }
};