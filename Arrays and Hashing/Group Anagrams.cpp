class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> mp;
        vector<string> str = strs;
        
        for(int i = 0 ; i < strs.size() ;i++)
        {
            sort(str[i].begin(),str[i].end());
            
            mp[str[i]].push_back(i);
        }
        
        vector<vector<string>> res;
        
        for(auto x : mp)
        {      
            vector<string> a;
            for(auto p : x.second)
            {
                a.push_back(strs[p]);
            }
            
            res.push_back(a);
        }
        
        return res;
    }
};