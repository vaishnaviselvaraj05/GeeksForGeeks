class Solution {
  public:
    string getBinaryRep(int n) {
        string result = bitset<32>(n).to_string();
        return result;
        
    }
};