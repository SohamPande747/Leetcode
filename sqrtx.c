int mySqrt(int x)
{
    long n = 0;

    if (x != 1 || x != 2)
    {
        while (n <= x/2)
        {
            if (n*n == x)
            {
                return n;
            }
            else if ((n + 1) * (n + 1) > x)
            {
                return n;
            }
            n++;
        }
    }
    return 1;
}