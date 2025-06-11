class Solution {
  public:
    long long sumOfDivisors(long long n) {
        long long result = 0;
        for(int d = 1 ; d <= n ; d++)
        {
            result += (long long) d * (n / d);
        }
        return result;
    }
};