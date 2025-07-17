class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        int n = arr.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            int count = 1;
            while((i - count)>= 0 && arr[i - count] <= arr[i]) 
            {
                count += res[i - count];
            } 
            res[i] = count;
        }

        return res;
    }
};