class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;

        int low = 0;
        int high = height.size() - 1;

        while (low < high) {
            int h = min(height[low], height[high]);
            int w = high - low;

            int tmp = h * w;

            area = max(area, tmp);

            if (height[high] > height[low]) {
                low++;
            } else if (height[high] < height[low]) {
                high--;
            } else {
                high--;
                low++;
            }
        }
        return area;
    }
};