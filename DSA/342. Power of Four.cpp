class Solution
{
public:
  bool isPowerOfFour(int n)
  {
    long mul = 1;
    if (n <= 0)
      return false;

    while (mul < n)
    {
      mul *= 4;
    }
    return mul == n;
  }
};