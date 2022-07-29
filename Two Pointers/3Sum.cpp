class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        
        int k = nums.size() - 1;
        for(int i = 0 ; i < nums.size() - 2 ;i++)
        {
            int a = nums[i];
            int j = i+1;
            int k = nums.size() - 1;
            while(j<k)
            {
                if(a+nums[j]+nums[k]==0)
                {
                    st.insert({a,nums[j],nums[k]});
                    while(j<k && (j+1)<k && nums[j]==nums[j+1])
                    {
                        j++;
                    }
                    
                    while(j<k && (k-1)>j && nums[k]==nums[k-1])
                    {
                        k--;
                    }
                    
                    j++;
                    k--;
                }else if(a+nums[j]+nums[k] < 0 )
                    j++;
                else
                    k--;
            }
        }
        
        vector<vector<int>> res;
        for(auto x : st){
            res.push_back(x);
        }
        
        return res;
    }
};