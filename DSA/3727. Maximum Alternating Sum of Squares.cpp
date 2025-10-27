class Solution
{
public:
  long long maxAlternatingSum(vector<int> &nums)
  {

    vector<long long> ok;

    for (int x : nums)
      ok.push_back(1ll * x * x);

    sort(ok.begin(), ok.end());
    long long z = 0;
    int n = ok.size();
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
        z += ok[n - 1 - i / 2];
      else
        z -= ok[i / 2];
    }

    return z;
  }
};