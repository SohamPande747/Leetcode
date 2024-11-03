class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> prefix(n, 0);

        prefix[0] = nums[0];
        
        for (int i = 1; i < n; i++) {
            prefix[i] = nums[i] + prefix[i - 1]; // initializing the prefix
                                                 //  value
        }

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            if (prefix[i] == k) {
                count++;// checking the count is equal to sum or not
            }

            if (mp.find(prefix[i] - k) != mp.end()) {
                count += mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
        }

        return count;
    }
};