class Solution
{
public:
  int reverseDegree(string s)
  {
    int output = 0;
    for (int i = 0; i < s.length(); i++)
    {
      int num = 26 - (s[i] - 'a');
      output += num * (i + 1);
    }
    return output;
  }
};