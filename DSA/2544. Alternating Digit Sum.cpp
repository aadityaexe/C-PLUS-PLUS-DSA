class Solution
{
public:
  int alternateDigitSum(int n)
  {
    int num = n;
    int sum = 0;
    int i = 1;
    while (num != 0)
    {
      if (i % 2 == 0)
      {
        sum -= num % 10;
      }
      else
      {
        sum += num % 10;
      }
      i++;
      num /= 10;
    }
    if ((i - 1) % 2 == 0)
      sum = -sum;
    num = sum;

    return num;
  }
};
