// User function Template for C++
class Solution {
  public:
    void printPattern(int N) {
       for(int i = 1 ; i <= N ; i++)
       {
           for(int j = 0 ; j < i ; j++)
           {
               cout<<"*";
           }
           cout<<" ";
       }
        
    }
};