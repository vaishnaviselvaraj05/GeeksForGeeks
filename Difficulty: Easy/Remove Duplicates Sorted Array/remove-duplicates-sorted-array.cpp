class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        set<int>s;
        vector<int>res;
        for(auto i : arr)
        {
            s.insert(i);
        }
        for(auto i : s)
        {
            res.push_back(i);
        }
        return res;
    }
};