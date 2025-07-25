class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>res;
        vector<int>v;
        for(auto i : a)
        {
            res.push_back(i);
        }
        for(auto i : b)
        {
            res.push_back(i);
        }
        
        unordered_set<int>s;
        for(auto i : res)
        {
            s.insert(i);
        }
        for(auto i : s)
        {
            v.push_back(i);
        }
        return v;
        
    }
};