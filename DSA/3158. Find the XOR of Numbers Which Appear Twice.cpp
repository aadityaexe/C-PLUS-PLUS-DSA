class Solution
{
public:
  int duplicateNumbersXOR(vector<int> &nums)
  {
    unordered_map<int, int> x;
    vector<int> allnum;
    int result = 0;
    for (auto z : nums)
    {
      x[z]++;
    }

    for (auto m : x)
    {
      if (m.second >= 2)
      {
        allnum.push_back(m.first);
      }
    }
    for (auto d : allnum)
    {
      result ^= d;
    }

    return result;
  }
};