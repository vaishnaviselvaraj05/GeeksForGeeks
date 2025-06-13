class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        unordered_map<int , int> map;
        for(auto i : arr)
        {
            map[i]++;
        }
        for(auto i : map)
        {
            if(i.second != k)
            {
                return i.first;
            }
        }
        return -1;
    }
};