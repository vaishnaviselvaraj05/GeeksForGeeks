// User function Template for C++
class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(mat[i][j] == x)
                {
                    return true;
                }
            }
        }
        return false;
    }
};