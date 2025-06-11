class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        // Code here
        int ans = -1;
        vector<int> res;
        int findex = firstOcurrence(x,arr,ans);
        if(findex == -1)
        {
            res.push_back(-1);
            return res;
        }
        res.push_back(findex);
        int lindex = lastOcurrence(x,arr,ans);
        res.push_back(lindex);
        return res;
    }
    
    int firstOcurrence(int x , vector<int>& arr , int ans)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(x == arr[mid])
            {
                ans = mid;
                high = mid - 1;
            }
            else if(x < arr[mid])
            {
                high = mid - 1; 
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int lastOcurrence(int x , vector<int>& arr , int ans)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(x == arr[mid])
            {
                ans = mid;
                low = mid + 1;
            }
            else if(x < arr[mid])
            {
                high = mid - 1; 
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};