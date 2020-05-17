#include <iostream>
#include "CQueue.h"

int main()
{

    CQueue queue1;
    int a = 5;
    int b = 2;
    int c = 3;
    queue1.appendTail(a);
    queue1.appendTail(b);
    queue1.appendTail(c);
    queue1.appendTail(7);
    queue1.appendTail(9);
    int head = queue1.deleteHead();
    cout << head;
    cout << queue1._top();
    head = queue1.deleteHead();
    cout << head;
    cout << queue1._top();
    head = queue1.deleteHead();
    cout << head;
    cout << queue1._top();
    return 0;

}

