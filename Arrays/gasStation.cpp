class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n = cost.size();
        int surp = 0;
        int Tsurp = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            Tsurp += gas[i] - cost[i];
            surp += gas[i] - cost[i];

            if (surp < 0)
            {
                surp = 0;
                ans = i+1;
            }
        }
        
        return (Tsurp < 0) ? -1:ans;
    }
};