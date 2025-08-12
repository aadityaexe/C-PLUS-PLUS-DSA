class Solution
{
public:
  bool repeatedSubstringPattern(string s)
  {
    int n = s.size();
    if ((s.size()) <= 1)
      return false;

    for (int i = 1; i <= (n / 2); i++)
    {
      if (n % i == 0)
      {
        string repeat = "";
        int loopTime = n / i;

        while (loopTime--)
        {
          repeat += s.substr(0, i);
        }

        if (repeat == s)
        {
          return true;
        }
      }
    }
    return false;
  }
};