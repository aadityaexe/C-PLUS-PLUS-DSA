class Solution
{
public:
  bool canJump(vector<int> &nums)
  {
    int jumpindex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (i > jumpindex)
        return false;
      jumpindex = max(jumpindex, i + nums[i]);
    }
    return true;
  }
};