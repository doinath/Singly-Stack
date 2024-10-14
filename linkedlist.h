#include <iostream>
#include "list.h"
#include "node.h"

class singlyLL : public list {
    node *head, *tail;
    int size;

public:
    singlyLL() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void add(int num) override { // stack implementation
        if (!head) {
            head = new node;
            head->value = num;
            head->next = nullptr;
            tail = head;
            size++;
            return;
        }

        node * n = new node;
        n->value = num;
        n->next = head;
        head = n;
        size++;
    }

    int peek() override {
        if(!head) { return -1; }

       return head->value;
    }

    void print() override {
        if(!head) { return; }

        node * curr = head;

        std::cout << "size: " << size << std::endl;

        while(curr != nullptr) {
            std::cout << curr->value << std::endl;
            curr = curr->next;
        }
    }

    void removeHead() override {
        if(!head) { return; }
        node * temp = head;
        head = head->next;
        temp->next = nullptr;
        free(temp);
        size--;
    }

    void removeTail() override {
        if(!head) { return; }
        node* curr = head;

        while(curr->next != tail) {
            curr = curr->next;
        }
        node* temp = curr->next;
        curr->next = nullptr;
        tail = curr;

        free(temp);
        size--;
    }

    void insertAt(int num, int pos) override {
        int ctr = 1;
        node * curr = head;

        while(ctr < pos - 1) {
            curr = curr->next;
            ctr++;
        }

        node* n = new node;
        n->value = num;
        n->next = curr->next;
        curr->next = n;
        size++;
    }

};
