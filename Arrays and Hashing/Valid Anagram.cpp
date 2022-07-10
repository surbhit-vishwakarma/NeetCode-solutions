class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26,0);
        
        for(int i = 0 ; i < s.size() ; i++)
            arr[s[i]-'a']++;
        
        for(int i = 0 ; i < t.size() ; i++)
            arr[t[i]-'a']--;
        
        for(auto x : arr)
        {
            if(x != 0)
                return false;
        }
        
        return true;
    }
};