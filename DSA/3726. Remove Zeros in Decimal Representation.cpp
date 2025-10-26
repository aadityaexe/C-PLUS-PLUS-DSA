class Solution
{
public:
  long long removeZeros(long long n)
  {
    long long res = 0, x = 1;
    while (n > 0)
    {
      int temp = n % 10;
      if (temp != 0)
      {
        res += temp * x;
        x *= 10;
      }
      n /= 10;
    }
    return res;
  }
};