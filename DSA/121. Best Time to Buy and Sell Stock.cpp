class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
      if (prices[i] < minPrice)
      {
        minPrice = prices[i];
      }
      167. Two Sum II - Input Array Is Sorted else
      {
        maxProfit = max(maxProfit, prices[i] - minPrice);
      }
    }

    return maxProfit;
  }
};
