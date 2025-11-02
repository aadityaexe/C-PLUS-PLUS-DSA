class Solution
{
public:
  vector<int> findMissingElements(vector<int> &nums)
  {
    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());
    vector<int> notfound;
    for (int i = min; i < max; i++)
    {
      if (find(nums.begin(), nums.end(), i) == nums.end())
      {
        notfound.push_back(i);
      }
    }

    return notfound;
  }
};