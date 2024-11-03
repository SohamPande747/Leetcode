class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> ans; // answer array
        unordered_map<string, vector<string>> mp; // map to get quantity of each 
    
        for (auto ch : strs) //iterate through array
        {
            string temp = ch; // taking temp as we don't want to jumble the actual word
            sort(temp.begin(), temp.end()); // to get same key for all anagrams
            mp[temp].push_back(ch); // pushing onto the hashmap
        }

        for (auto i : mp) // iterate through map
        {
            ans.push_back(i.second); // pushing the values of each key 
        }
        return ans;
    }
};