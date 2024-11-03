class Solution {
public:
    bool isAnagram(string s, string t) {
       
       int mp[26] = {0};

        for (char x : s) {
            mp[x - 'a']++;
        }
        for (char x : t) {
            mp[x - 'a']--;
        }

        for (auto x : mp) {
            if (x != 0) {
                return false;
            }
        }
        return true;
    }
};