class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> result; // answer array that will be returned 

        sort(nums.begin(), nums.end()); // using default sort method to get a template to sliding window

        for (int i = 0; i < n; i++) { // iteration loop 
            int target = -nums[i]; // a+b+c = 0 also means a+b = -c
            int start = i + 1;  // lower value pointer 
            int end = n - 1;  // higher value pointer

            while (start < end) {
                if (nums[start] + nums[end] > target) {  // checking for result <, > or =...
                    end--;
                } else if (nums[start] + nums[end] < target) {
                    start++;
                } else {
                    vector<int> temp = {nums[start], nums[end], nums[i]};
                    result.push_back(temp);

                    while (start < end && nums[start] == temp[0]) {   // removing duplicated values
                        start++;
                    }
                    while (start < end && nums[end] == temp[1]) { // removing duplicated values 
                        end--;
                    }
                }
                while (i + 1 < n && nums[i + 1] == nums[i]) { // removing duplicate values 
                    i++;
                }
            }
        }
        return result;
    }
};