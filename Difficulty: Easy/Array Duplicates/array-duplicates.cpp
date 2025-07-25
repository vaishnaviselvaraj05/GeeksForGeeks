class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int>res;
        unordered_set<int> s;
        for(auto i : arr)
        {
            if(s.count(i) > 0)
            {
                res.push_back(i);
            }
            else
            {
                s.insert(i);
            }
        }
        return res;
    }
};