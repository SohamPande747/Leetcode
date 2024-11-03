class Solution {
public:
    vector<int> temp;
    void backtrack(int target,vector<int>& candidates,vector<vector<int>>& ans, int index) 
    {
        if (target == 0) 
        {
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < candidates.size(); i++) 
        {
            temp.push_back(candidates[i]);

            if (target - candidates[i] >= 0) 
            {
                backtrack(target - candidates[i],candidates, ans, i);
            }
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> sol;

        backtrack(target,candidates, sol, 0);

        return sol;
    }
};