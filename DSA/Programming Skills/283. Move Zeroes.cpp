class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int c = 0;
    for (int i = 0; i < nums.size() - c; i++)
    {
      if (nums[i] == 0)
      {
        nums.erase(nums.begin() + i);
        nums.push_back(0);
        c++;
        i--;
      }
    }
  }
};