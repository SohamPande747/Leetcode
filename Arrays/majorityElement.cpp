class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        int flag = 0;

        unordered_map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
            if (flag == 0) {
                ans = i;
            }
            flag += i == ans ? 1 : -1;
        }

        return ans;
    }
};