
class Solution
{
public:
  int sumDivisibleByK(vector<int> &nums, int k)
  {
    unordered_map<int, int> x;

    for (int num : nums)
    {
      x[num]++;
    }

    int sum = 0;

    for (auto &[num, count] : x)
    {
      if (count % k == 0)
      {
        sum += num * count;
      }
    }
    return sum;
  }
};