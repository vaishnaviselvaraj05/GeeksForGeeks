class Solution {
  public:
    int countFactors(int N) {
        int count = 0;
        int n = sqrt(N);
        for(int i = 1 ; i <= n ; i++)
        {
            if(N % i == 0)
            {
                if(i == N / i)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
        }
        return count;
        
    }
};