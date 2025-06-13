
class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 1 ; i <= n ; i++)
        {
            if(arr[i - 1] == k)
            {
                return i;
            }
        }
        return -1;
    }
};
