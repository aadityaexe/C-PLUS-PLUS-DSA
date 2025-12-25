class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int maxCount = 0; // longest streak found so far
    int current = 0;  // current streak

    for (int x : nums)
    {
      if (x == 1)
      {
        current++; // extend the streak
        maxCount = max(maxCount, current);
      }
      else
      {
        current = 0; // streak broken
      }
    }
    return maxCount;
  }
};
