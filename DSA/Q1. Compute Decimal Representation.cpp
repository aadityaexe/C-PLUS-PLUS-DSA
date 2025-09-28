class Solution
{
public:
  vector<int> decimalRepresentation(int n)
  {
    vector<int> result;
    long long i = 1, num = 0;

    while (n != 0)
    {
      num = n % 10;
      if (num != 0)
      {
        result.push_back(num * i);
      }
      n = n / 10;
      i = i * 10;
    }
    reverse(result.begin(), result.end());

    return result;
  }
};