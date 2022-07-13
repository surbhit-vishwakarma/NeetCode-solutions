class Solution {
public:

    
    vector<int> countBits(int n) {
    int arr[n+1];
        arr[0] = 0;
    vector<int> res;
        
    for(int i = 0 ; i < n+1 ; i++)
    {
        arr[i] = (i & 1) + arr[i/2];
        res.push_back(arr[i]);
    }
        return res;
    }
};