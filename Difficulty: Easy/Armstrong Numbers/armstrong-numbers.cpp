// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n ;
        int sum = 0;
        while(n > 0)
        {
            int digit = n % 10;
            sum += digit * digit * digit;
            n = n / 10;
        }
        return sum == original;
        
    }
};