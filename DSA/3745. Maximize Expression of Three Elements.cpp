class Solution
{
public:
  int maximizeExpressionOfThree(vector<int> &nums)
  {
    int i = nums.size();
    sort(nums.begin(), nums.end());
    int a = nums[i - 1];
    int b = nums[i - 2];
    int c = nums[0];
    return a + b - c;
  }
};