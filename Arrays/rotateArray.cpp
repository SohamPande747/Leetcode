class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        k %= n; // so if k > n then this will take only required step into account

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};