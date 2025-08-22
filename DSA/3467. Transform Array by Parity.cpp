class Solution
{
public:
  vector<int> transformArray(vector<int> &nums)
  {
    vector<int> result;
    for (int num : nums)
    {
      if (num % 2 == 0)
      {
        result.insert(result.begin(), 0);
      }
      else
      {
        result.push_back(1);
      }
    }
    return result;
  }
};
