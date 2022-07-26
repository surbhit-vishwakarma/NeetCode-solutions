class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0 , temp = n, p = 31;
        while(temp>0)
        {
            int k = temp%2;
            
            if(k)
                ans += pow(2,p);
            
            p--;
            
            temp /= 2;
        }
        
        return ans;
    }
};