//
// Created by Windows 10 on 13/10/2024.
//

#ifndef STACK_SINGLYSTACK_H
#define STACK_SINGLYSTACK_H
#include "linkedlist.h"
#include "stack.h"

class singlyStack : public stack {
    singlyLL* list;

public:
    singlyStack() {
        list = new singlyLL();
    }

    void push(int num) override {
        list->add(num);
    }

    int peek() override {
        return list->peek();
    }

    void print() override {
        list->print();
    }
    void pop() override {
        list->removeHead();
    }

    void popTail() override {
        list->removeTail();
    }

    void insertPush(int num, int pos) {
        list->insertAt(num, pos);
    }

};


#endif //STACK_SINGLYSTACK_H
