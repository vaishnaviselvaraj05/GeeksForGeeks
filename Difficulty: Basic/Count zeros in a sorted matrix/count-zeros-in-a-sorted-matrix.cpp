//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int n = A.size();
        int m = A[0].size();
        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(A[i][j] == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};