//
// Created by Windows 10 on 13/10/2024.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
class stack {
public:
    virtual void push(int num) = 0;
    virtual int peek() = 0;
    virtual void pop() = 0;
    virtual void popTail() = 0;
    virtual void print() = 0;
    virtual void insertPush(int num, int pos) = 0;
};
#endif //STACK_STACK_H
