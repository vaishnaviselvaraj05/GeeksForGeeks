// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int n = arr.size();
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
        return max1 * max2;
    }
};