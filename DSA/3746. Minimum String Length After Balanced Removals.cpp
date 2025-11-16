class Solution
{
public:
  int minLengthAfterRemovals(string s)
  {
    string g = s;

    int counta = 0, countb = 0;

    for (char c : g)
    {
      if (c == 'a')
        counta++;
      else
        countb++;
    }

    return abs(counta - countb);
  }
};