/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        string ch = to_string(n);
        for(auto& c : ch)
        {
            if(c == '0')
            {
                c = '5';
            }
        }
        return stoi(ch);
    }
};