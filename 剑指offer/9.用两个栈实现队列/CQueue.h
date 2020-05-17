#include <stack>
#include <iostream>
using namespace std;

//两个栈实现队列
class CQueue
{
public:
    CQueue(){
        cout << "构造";
    };

    ~CQueue(){
//        while(!stack1.empty()){
//            stack1.pop();
//        }
//        while(!stack2.empty()){
//            stack2.pop();
//        }

        cout<< "析构";
    };
    void appendTail(const int& node);
    int deleteHead();
    int _top();

private:
    stack<int> stack1;
    stack<int> stack2;

};
