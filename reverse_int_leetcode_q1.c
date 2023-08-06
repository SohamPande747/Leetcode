#include <stdio.h>
#include <limits.h>

int reverse(int num);
int main()
{
  int num = 80586; 
  int output = reverse(num);
  printf("%d\n", output);
}

int reverse(int num)
{
  
  long remainder,result=0;
  while (num != 0) 
  {
    remainder = num%10;
    num /= 10;
    result = result*10 + remainder;
  } 
  if (result > INT_MAX || result <= INT_MIN)
  {
    return 0;
  }
  else
  {
    return result;
  }
}
