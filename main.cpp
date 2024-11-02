#include "singlyStack.h"

int main() {
    stack* s = new singlyStack();

    int choice;
    int input, pos;

    while(true) {
        std::cout << "1 push, 2 pop, 3 peek, 4 print, 5 popTail, 6 insertPush, 7 exit" << std::endl;
        std::cout << "op: ";
        std::cin >> choice;

            switch(choice) {

                case 1:
                    std::cout << "enter: ";
                    std::cin >> input;
                    s->push(input);
                    break;
                case 2:
                    s->pop();
                    break;
                case 3:
                    std::cout << "top element: "<< s->peek() << std::endl;
                    break;
                case 4:
                    s->print();
                    break;
                case 5:
                    s->popTail();
                    break;
                case 6:
                    std::cout << "Enter num: ";
                    std::cin >> input;
                    std::cout << "what pos: ";
                    std::cin >> pos;

                    s->insertPush(input, pos);
                    break;
                case 7:
                    std::cout << "exiting..." << std::endl;
                    return 0;
                default:
                    std::cout << "fault..." << std::endl;
            }

            std::cout << "Program is terminated..\n";
    }



/*    s->push(1);
    s->push(3);
    s->push(4);
    std::cout << "top element: "<< s->peek() << std::endl;
    s->print();
    s->pop();
    std::cout << "top element: "<< s->peek() << std::endl;
    s->print();
    s->popTail();
    std::cout << "top element: "<< s->peek() << std::endl;
    s->print();
    s->push(5);
    s->push(9);
    s->push(10);
    s->print();
    s->pop();
    std::cout << "top element: "<< s->peek() << std::endl;
    s->popTail();
    s->print();
*/
    return 0;
}
