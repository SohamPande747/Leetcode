class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();

        vector<vector<int>> result;

        if (n <= 0)
        {
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);

        for (int i = 1; i < n; i++)
        {
            if (result.back()[1] >= intervals[i][0])
            {
                result.back()[0] = min(intervals[i][0], result.back()[0]); 
                result.back()[1] = max(intervals[i][1], result.back()[1]);
            }
            else
            {
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};