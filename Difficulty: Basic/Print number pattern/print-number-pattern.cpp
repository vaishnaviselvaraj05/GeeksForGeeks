class Solution {
  public:
    vector<int> printPat(int n) {
        vector<int> result;
        for(int i = 0 ; i < n ; i++)
        {
            int rcount = n - i;
            for(int j = n ; j >= 1 ; j--)
            {
                for(int k = 0 ; k < rcount ; k++)
                {
                    result.push_back(j);
                }
            }
            result.push_back(-1);
        }
        return result;
    }
};