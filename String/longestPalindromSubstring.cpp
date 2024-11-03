class Solution {
public:
    string ans = "";  // declaring ans as global so it can be accessed globally 
    
    void expand(string& s, int left , int right) //this will take a letter and move out checking if both sides are equal and keep going if they are else break the loop...
    {
        while (left >= 0 && right < s.length()) 
        {
            if (s[left] != s[right])
            {
                break;
            }
            left--;
            right++;
        }
        if(ans.length() < right - left) // if existing ans is smaller than the new palinfrome substring found we assign new value...
        {
            ans = s.substr(left+1, right-left-1); // left + 1 is starting index of assignment whereas reigh-left-1 is the length
        }
    }
    string longestPalindrome(string s) 
    {
        for (int i = 0; i < s.length(); i++)
        {
            expand(s,i,i); // this is for even values;
            expand(s,i,i+1); // this is used for odd values 
        }
        return ans;
    }
};