class Solution
{
public:
  bool isPowerOfThree(int n)
  {
    long mul = 1;
    if (n <= 0)
      return false;

    while (mul < n)
    {
      mul *= 3;
    }
    return mul == n;
  }
};
