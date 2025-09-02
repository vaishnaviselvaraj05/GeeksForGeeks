class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        int start = 0;
        int curr_sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            curr_sum += arr[i];
            while(curr_sum > target && start <= i)
            {
                curr_sum -= arr[start];
                start++;
            }
            if(curr_sum == target)
            {
                return {start + 1 , i + 1}; 
            }
        }
        
        return {-1};
    }
};