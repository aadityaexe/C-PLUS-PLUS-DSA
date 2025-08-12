class Solution
{
public:
  vector<int> singleNumber(vector<int> &nums)
  {
    unordered_map<int, int> x;
    vector<int> output;
    for (auto m : nums)
    {
      x[m]++;
    }

    for (auto z : x)
    {
      if (z.second == 1)
      {
        output.push_back(z.first);
      }
    }

    return output;
  }
};