class Solution {
public:
    bool isPalindrome(string s) {
        bool res = true;
        
        string helper = "";
        for(int i = 0 ; i < s.length() ;i++)
        {
            if(isalpha(s[i]))
                helper += tolower(s[i]);
            else if(isdigit(s[i]))
            {
                helper += s[i];
            }
            else
                continue;
        }
        
        int i = 0 , j = helper.length()-1;
        while(i<j)
        {
            if(helper[i] != helper[j])
            {
                res = false;
                break;
            }
            
            i++;
            j--;
        }
        
        return res;
    }
};