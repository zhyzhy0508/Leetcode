#include <iostream>
#include <stack>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    void PrintListReversingly_Iteratively(ListNode* pHead)
    {
        std::stack<ListNode*> nodes;
        ListNode* pNode = pHead;
        while(pNode != NULL)
        {
            nodes.push(pNode);
            pNode = pNode->next;
        }
        while(!nodes.empty())
        {
            pNode = nodes.top();
            cout << pNode->val;
            nodes.pop();
        }
    }
    void PrintListReversingly_Recursively(ListNode* pHead)
    {
        if(pHead != NULL)
        {
            if(pHead->next != NULL)
                PrintListReversingly_Recursively(pHead->next);
        }
        cout << pHead->val;

    }
};

int main()
{
    ListNode* first = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    first->next = second;
    second->next = third;
    Solution().PrintListReversingly_Iteratively(first);
    Solution().PrintListReversingly_Recursively(first);
    delete first;
    delete second;
    delete third;
}
