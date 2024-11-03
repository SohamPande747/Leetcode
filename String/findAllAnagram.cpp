class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;       // initialize answer array
        int lenS = s.length(); // length of s
        int lenP = p.length(); // length of p

        vector<int> sub(26, 0); // initialize array of 26 with 0 (for p)

        for (char& ch : p) // count values of each letter into array
        {
            sub[ch - 'a']++;
        }

        for (int i = 0; i < lenS; i++) {
            vector<int> hash(26, 0); // array for main string s which resets
                                     // after every iteration

            for (int j = i; j < i + lenP && j < lenS;
                 j++) // 2nd loop to iterate through all possible windows
            {
                hash[s[j] - 'a']++; // increment particular letter count for
                                    // main string into the the hash array
            }

            if (hash == sub) // comparing to check if all elements are present
                             // in string in that window,
            {
                ans.push_back(i); // pushing given index to ans
            }
        }
        return ans;
    }
};