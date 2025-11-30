class Solution
{
public:
  int countElements(vector<int> &nums, int k)
  {
    int x = nums.size();
    if (k == 0)
      return x;
    sort(nums.begin(), nums.end());
    int l = nums[x - k];
    int count = 0;
    for (int v : nums)
    {
      if (v < l)
        count++;
    }
    return count;
  }
};