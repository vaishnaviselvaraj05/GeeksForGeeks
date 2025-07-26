class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        map<int,int>m;
        for(int i : arr)
        {
            m[i]++;
        }
        return m[target];
    }
};
