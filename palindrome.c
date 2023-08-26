#include <stdio.h>

int main()
{
    int x = 1234;
    isPalindrome(x);

}

bool isPalindrome(int x)
{
    if (x >= 0)
    {
        int temp = x;
        long out = 0;
        while (temp > 0)
        {
            int last = temp%10;
            out = (out * 10) + last;
            temp /= 10;
        }
        if (out < INT_MAX)
        {
            if (out == x)
            {
                return true;
            }
        }
    }

    return false;
}