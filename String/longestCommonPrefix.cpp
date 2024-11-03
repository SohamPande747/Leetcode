class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string ans = "";

        sort(strs.begin(), strs.end()); //to get strings in lexicogaphicall order 

        int n = strs.size();

        string first = strs[0]; // 1st elemnt of sorted
        string last = strs[n-1]; // last element of sorted

        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i]) //comparing letter by letter the first and laast
            {
                return ans; // if letter is not same just return the current ans
            }
            ans += first[i]; // add current letter to the answer
        }
        return ans;
    }
};