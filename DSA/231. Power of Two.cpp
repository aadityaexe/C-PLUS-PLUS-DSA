class Solution
{
public:
  bool isPowerOfTwo(int n)
  {
    long mul = 1;
    if (n <= 0)
      return false;

    while (mul < n)
    {
      mul *= 2;
    }
    return mul == n;
  }
};
