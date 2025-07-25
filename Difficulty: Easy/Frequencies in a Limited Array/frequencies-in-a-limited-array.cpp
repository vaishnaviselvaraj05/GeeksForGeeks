class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        map<int,int>m;
        vector<int> res(arr.size() , 0);
        for(auto i : arr)
        {
            m[i]++;
        }
        for(int i = 1 ; i <= arr.size() ; i++)
        {
            res[i - 1] = m[i];
        }
        return res;
    }
};
