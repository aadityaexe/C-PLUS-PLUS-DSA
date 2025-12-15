class Solution
{
public:
  int firstBadVersion(int n)
  {

    int s = 1;
    int e = n;
    int mid;
    int firstBadVersion = -1;

    while (s <= e)
    {
      mid = s + ((e - s) >> 1);

      if (isBadVersion(mid))
      {
        firstBadVersion = mid;

        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }

    return firstBadVersion;
  }
};