class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());

        int min_dif = INT_MAX/2; // maximum distance 

        
        for (int i = 0; i < n; i++)
        {
            int end = n-1; // end pointer
            int start = i+1; // mid pointer
            // i will be the start pointer

            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];

                if (abs(target-sum) < min_dif)
                {
                    min_dif = abs(target-sum);
                    ans = sum;
                }
                if (sum <= target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return ans;
    }
};
