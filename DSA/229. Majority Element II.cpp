class Solution
{
public:
  vector<int> majorityElement(vector<int> &nums)
  {

    int size = nums.size();

    unordered_map<int, int> x;
    vector<int> output;
    for (auto m : nums)
    {
      x[m]++;
    }

    for (auto z : x)
    {
      if (z.second > size / 3)
      {
        output.push_back(z.first);
      }
    }
    return output;
  }
};