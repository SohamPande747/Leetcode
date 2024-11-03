class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0;
        int count = 0;
        while (i < nums.size())
        {
            if (nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                count++;
            }
            else
            {
                i++;
            }
            
        }
        for (int i = 0; i < count; i++)
        {
            nums.push_back(0);
        }
    }
};