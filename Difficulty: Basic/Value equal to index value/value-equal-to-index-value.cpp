// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        arr.insert(arr.begin(),0);
        int n = arr.size();
        vector<int> res;
        for(int i = 1 ; i < n ; i++)
        {
            if(i == arr[i])
            {
                res.push_back(i);
            }
        }
        return res;
    }
};