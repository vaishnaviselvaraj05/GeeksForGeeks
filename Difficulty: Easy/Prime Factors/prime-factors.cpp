

class Solution {
  public:
    vector<int> AllPrimeFactors(int N) {
        vector<int> res;
        if(N % 2 == 0)
        {
            res.push_back(2);
            while(N % 2 == 0)
            {
                N /= 2;
            }
        }
        for(int i = 3 ; i <= sqrt(N) ; i += 2)
        {
            if(N % i == 0)
            {
                res.push_back(i);
                while(N % i == 0)
                {
                    N /= i;
                }
            }
        }
        if(N > 2)
        {
            res.push_back(N);
        }
        return res;
        
    }
};