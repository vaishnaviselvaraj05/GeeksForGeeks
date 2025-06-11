class Solution {
  public:
    int lastIndex(string s) {
        for(int i = s.length() - 1 ; i >= 0 ; i--)
        {
            char ch = s[i];
            if(ch == '1')
            {
                return i;
            }
        }
        return -1;
    }
};