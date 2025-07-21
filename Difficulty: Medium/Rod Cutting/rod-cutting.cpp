// User function Template for C++

class Solution {
  public:
    int cutRod(vector<int> &price) {
        // code here
        int n = price.size();
        vector<int> dp(n + 1 , 0);
        for(int i = 1 ; i <= n ; i++)
        {
            int maxVal = 0;
            for(int j = 0 ; j < i ; j++)
            {
                maxVal = max(maxVal , price[j] + dp[i - j - 1]);
            }
            dp[i] = maxVal;
        }
        return dp[n];
    }
};