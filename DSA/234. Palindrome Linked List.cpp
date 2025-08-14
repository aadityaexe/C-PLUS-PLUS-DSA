class Solution
{
public:
  bool isPalindrome(ListNode *head)
  {
    vector<int> digits;
    ListNode *temp = head;

    while (temp != nullptr)
    {
      digits.push_back(temp->val);
      temp = temp->next;
    }

    int i = 0, j = digits.size() - 1;
    while (i < j)
    {
      if (digits[i] != digits[j])
        return false;
      i++;
      j--;
    }
    return true;
  }
};
