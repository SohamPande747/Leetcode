class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int n = nums.size();

        int flag = 0; // if count is odd then flag is 1
        int count = 0;

        unordered_map <int,int> mp;
        mp[0] = -1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                flag++;
            }
            else
            {
                flag--;
            }

            if (mp.count(flag))
            {
                count = max(i-mp[flag], count);
            }
            else
            {
                mp[flag] = i;
            }
        }
        return count;
    }
};