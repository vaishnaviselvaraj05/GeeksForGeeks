class Solution {
  public:
    bool isPerfectNumber(int n) {
        if(n == 1) return false;
        long long sum = 1;
        long long m = sqrt(n);
        for(long long i = 2 ; i <= m ; i++)
        {
            if(n % i == 0)
            {
                sum += i;
                long long div = n / i;
                if(div != i)
                {
                    sum += div;
                }
            }
        }
        return sum == n;
    }
};