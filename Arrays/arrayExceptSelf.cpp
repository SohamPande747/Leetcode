class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n, 1);

        int start = 1;
        int end = 1;

        for (int i = 0; i < n; i++) {
            result[i] *= start;
            start *= nums[i];

            result[n - i - 1] *= end;
            end *= nums[n - i - 1];
        }
        return result;
    }
};