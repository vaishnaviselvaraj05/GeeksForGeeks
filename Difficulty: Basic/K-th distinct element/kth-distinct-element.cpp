class Solution {
  public:
    int KthDistinct(vector<int> nums, int k) {
        unordered_map<int,int>map;
        for(auto i : nums)
        {
            map[i]++;
        }
        int count = 0;
        for(auto i : nums)
        {
            if(map[i] == 1)
            {
                count++;
                if(count == k)
                {
                    return i;
                    
                }
            }
        }
        return -1;
    }
};