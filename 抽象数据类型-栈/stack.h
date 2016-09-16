//stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_
/*
栈的操作：
    可创建空栈
    可将数据项添加到堆顶（压入）
    可从栈顶删除数据项（弹出）
    可查看栈是否填满
    可查看栈是否为空
*/

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};  //constant specific to class
    Item items[MAX];   //holds stack items
    int top;          //index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    //push() returns false if stack already is full, true otherwise
    bool push(const Item & item);  //add item to stack
    //pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);         //pop top into item
};
#endif // STACK_H_
