class Solution
{
public:
  vector<int> getSneakyNumbers(vector<int> &nums)
  {
    vector<int> x;

    unordered_map<int, int> z;

    for (auto s : nums)
    {
      z[s]++;
    }

    for (auto m : z)
    {
      if (m.second == 2)
      {
        x.push_back(m.first);
      }
    }

    return x;
  }
};