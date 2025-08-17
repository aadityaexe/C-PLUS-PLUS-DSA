class Solution
{
public:
  long long maxProfit(vector<int> &prices, vector<int> &strategy, int k)
  {
    int n = prices.size();
    vector<long long> prefixA(n + 1, 0), prefixB(n + 1, 0);

    long long original = 0;
    for (int i = 0; i < n; i++)
    {
      original += 1LL * strategy[i] * prices[i];
      prefixA[i + 1] = prefixA[i] + 1LL * (-strategy[i]) * prices[i];
      prefixB[i + 1] = prefixB[i] + 1LL * (1 - strategy[i]) * prices[i];
    }

    long long bestDelta = 0;
    for (int i = 0; i + k <= n; i++)
    {
      int mid = i + k / 2;
      int end = i + k;
      long long left = prefixA[mid] - prefixA[i];
      long long right = prefixB[end] - prefixB[mid];
      long long delta = left + right;
      bestDelta = max(bestDelta, delta);
    }

    return original + bestDelta;
  }
};
