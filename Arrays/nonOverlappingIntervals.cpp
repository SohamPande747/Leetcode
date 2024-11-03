class Solution {
public:
    static bool cmp(vector <int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();

        sort(intervals.begin(), intervals.end(), cmp);


        int ans = 0;
        int count = 1;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (intervals[i][0] >= intervals[index][1])
            {
                count++;
                index = i;
            }
        }
        ans = n - count;
        return ans;
    }
};