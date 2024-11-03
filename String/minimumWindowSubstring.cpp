class Solution {
public:
    string minWindow(string s, string t) {
        int lenS = s.length(); // length of s
        int lenT = t.length(); // length of string t

        int minLen = INT_MAX; // giving max value to window index
        int count = 0; 
        int l = 0, r = 0, sInd = -1;

        unordered_map<char, int> seen; // hash map to note if character is encountered or not 

        for (char a : t) { // storing all elements of t in hash map
            seen[a]++;
        }

        while (r < lenS) {
            if (seen[s[r]] > 0) {
                count++;
            }
            seen[s[r]]--;

            while (count == lenT) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sInd = l;
                }
                seen[s[l]]++;
                if (seen[s[l]] > 0) {
                    count--;
                }
                l++;
            }
            r++;
        }

        if (sInd == -1) {
            return "";
        } else {
            return s.substr(sInd, minLen);
        }
    }
};