class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    unordered_map<int, int> x;

    for (auto m : nums)
    {
      x[m]++;
    }

    for (auto z : x)
    {
      if (z.second == 1)
      {
        return z.first;
      }
    }

    return 0;
  }
};