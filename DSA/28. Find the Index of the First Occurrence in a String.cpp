class Solution
{
public:
  int strStr(string haystack, string needle)
  {
    int start = 0, end = needle.size() - 1;
    int k;

    if (haystack.size() < needle.size())
      return -1;

    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
      start = 0;
      if (haystack[i] == needle[start])
      {
        for (k = i; k < i + needle.size(); k++)
        {
          if (haystack[k] != needle[start])
          {
            break;
          }
          start++;
        }
      }
      if (start == needle.size())
      {
        return i;
      }
    }
    return -1;
  }
};
