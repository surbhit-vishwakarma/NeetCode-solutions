class Solution {
public:
    int reverse(int x) {
        long long int res = x%10;
        x /= 10;
        
        while(x != 0)
        {
            int mod = x%10;
            res = res*10 + mod;
            
            x /= 10;
        }
        
        if(res > INT_MAX or res <=INT_MIN)
                return 0;
       
        return res;
    }
};