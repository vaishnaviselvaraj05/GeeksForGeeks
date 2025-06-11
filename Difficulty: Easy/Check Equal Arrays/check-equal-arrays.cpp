// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size() != b.size())
        {
            return false;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a == b;
    }
};