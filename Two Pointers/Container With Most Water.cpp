class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, curr = 0 ;
        int i = 0 , j = height.size() - 1;
        
        while(i<j)
        {
            if(height[i] > height[j])
            {
                curr = (height[j])*(j-i);
                j--;
            }else{
                curr = (height[i])*(j-i);
                i++;
            }
            
            ans = max(curr,ans);
        }
        
        return ans;
    }
};