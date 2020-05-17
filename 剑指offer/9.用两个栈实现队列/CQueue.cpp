#include "CQueue.h"
void CQueue::appendTail(const int&element)
{
    stack1.push(element);
}
int CQueue::deleteHead()
{
    if(stack2.size() <= 0)
    {
        while(stack1.size()>0 )
        {
            int& data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    if(stack2.size() == 0)
        return 0;
    int head = stack2.top();
    stack2.pop();
    return head;
}
int CQueue::_top()
{
    if(stack2.size() <= 0)
    {
        while(stack1.size()>0 )
        {
            int& data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    if(stack2.size() == 0)
        return -1;
    return stack2.top();
}
