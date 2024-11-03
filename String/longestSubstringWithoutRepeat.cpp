class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = s.length(); //length of string
        int ans = 0; // answer
        int low = 0; // pointer 1
        int high = 0; // pointer 2

        unordered_map<char,int> map; //hashmap

        while (high < n) //while loop condition
        {
            if (map[s[high]] == 0) // if element at high is not in map
            {
                map[s[high]]++; // add it to map
                high++; //increase pointer value
                int temp = map.size(); // take map size
                ans = max(ans, temp); // compare map size to ans and deliver max 
            }
            else
            {
                map.erase(s[low]); // just remove element at low if it is repeat
                low++; // increase value of pointer 
            }
        }
        return ans;
    }
};