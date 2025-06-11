class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int f = 0;
        int l = n - 1;
        int ans = -1;
        while(f <= l)
        {
            int m = (f + l) / 2;
            if(k == arr[m])
            {
                ans = m;
                l = m - 1;
            }
            else if(k < arr[m])
            {
                l = m - 1;
            }
            else
            {
                f = m + 1;
            }
        }
        return ans;
    }
};