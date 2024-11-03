class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans;

        if (k == 0) {
            return ans;
        }
        deque<int> w;

        for (int i = 0; i < n; i++) {
            while (!w.empty() && w.front() <= i - k) {
                w.pop_front();
            }
            while (!w.empty() && nums[w.back()] <= nums[i]) {
                w.pop_back();
            }
            w.push_back(i);

            if (i >= k - 1) {
                ans.push_back(nums[w.front()]);
            }
        }
        return ans;
    }
};