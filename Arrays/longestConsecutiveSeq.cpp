class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.empty())
        {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int count = 1; //there will always be atleast 1 member
        int ans = 1; 

        int ref = nums[0]; //reference integer

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i-1])
            {
                continue;
            }

            if (nums[i] == ref+1)
            {
                ref++;
                ans++;
                count = max(ans, count);
            }
            else
            {
                ref = nums[i];
                ans = 1;
            }
        }             
        return count;
    }
};