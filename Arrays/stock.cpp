class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minE = prices[0]; //initializing 0th index as minimum element
        int ans = 0; // initializing ans as minimum possible value

        for (int i = 0; i < prices.size(); i++) // looping through
        {
            minE = min(minE, prices[i]); // updating min element
            ans = max(ans, prices[i] - minE); // updating ans 
        }    
        return ans;
    }
};