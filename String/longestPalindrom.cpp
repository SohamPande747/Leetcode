class Solution {
public:
    int longestPalindrome(string s) 
    {
        vector<int> vect(100,0);

        int odd = 0;
        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            vect[s[i]-'A']++;
            
            if(vect[s[i]-'A']%2==1)
            {
                odd++;
            }
            else
            {
                odd--;
            }
        }
        if(odd>1)
        {
            return n-odd+1;
        }

        return n;
    }
};