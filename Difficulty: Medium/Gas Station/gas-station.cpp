/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int totalGas = 0;
        int totalCost = 0;
        int start = 0;
        int tank = 0;
        for(int i = 0 ; i < gas.size(); i++)
        {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];
            if(tank < 0)
            {
                start = i + 1;
                tank = 0;
            }
        }
        return (totalGas >= totalCost) ? start : -1;
        
    }
};