class Solution {
  public:
    int countWays(int n) {
        // your code here
        if(n == 1)
        {
            return n;
        }
        int prev = 1 , curr = 1 , next = 1 , i = 2;
        while(i <= n)
        {
            next = prev + curr;
            prev = curr;
            curr = next;
            i++;
        }
        return next;
    }
};
