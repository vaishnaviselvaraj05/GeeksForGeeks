class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> seen;
        for(auto i : arr)
        {
            int num = target - i;
            if(seen.count(num))
            {
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};