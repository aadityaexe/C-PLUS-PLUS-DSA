class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    ListNode *temp = head;
    int count = 0;
    while (temp->next != nullptr)
    {
      count++;
      temp = temp->next;
    }
    temp = head;
    if (count % 2 != 0)
    {
      count = (count / 2) + 1;
    }
    else
    {
      count = (count / 2);
    }
    for (int i = 0; i < count; i++)
    {
      temp = temp->next;
    }
    return temp;
  }
};