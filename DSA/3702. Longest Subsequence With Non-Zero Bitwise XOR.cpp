class Solution
{
public:
  int longestSubsequence(vector<int> &nums)
  {
    vector<int> xyz = nums;
    bool zero = false;
    int sum = 0;
    for (auto x : xyz)
    {
      sum ^= x;

      if (x != 0)
      {
        zero = true;
      }
    }
    return sum != 0 ? xyz.size() : (zero ? xyz.size() - 1 : 0);
  }
};