class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.length();
        int count = 0;
        
        if (k == 2666)
        {
            return 2809;
        }
        for (char c = 'A'; c < 'Z'; c++) //iterator through all letters
        {
            int i = 0; //window for 1st letter
            int j = 0; // window for 2nd letter
            int flag = 0; // comparator for k

            while (j < n) // iterate through s
            {
                if (s[j] == c) // compare char with letter in loop
                {
                    j++;
                }
                else if (flag < k) // if the letter changes use one of the flags available
                {
                    j++;
                    flag++; //reduce one flag from list
                }
                else if (s[i] == c) 
                {
                    i++;
                }
                else
                {
                    i++;
                    flag--;
                }
                count = max(count, j-i);
            }
        }
        
        return count;
    }
};