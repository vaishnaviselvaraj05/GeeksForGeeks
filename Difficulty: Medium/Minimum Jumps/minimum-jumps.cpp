class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n <= 1) return 0;
        if(arr[0] == 0) return -1;
        int count = 1;
        int jump = arr[0];
        int step = arr[0];
        for(int i = 1 ; i < n ; i++)
        {
            if( i == n - 1 ) return count;
            
            jump = max(jump , i + arr[i]);
            step--;
            
            if(step == 0)
            {
                count++;
                if(i >= jump) return -1;
                step = jump - i;
            }
        }
        return -1;
    }
};
