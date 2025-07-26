class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int m = a.size();
        int n = b.size();
        
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(a[i] != b[i])
                {
                    return i;
                }
            }
        }
        return 0;
    }
};