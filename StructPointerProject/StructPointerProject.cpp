#include <iostream>
#include "SimpleList.h"

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    Node<int>* head = nullptr;

    Push(head, 100);
    Push(head, 200);
    Push(head, 300);

    List(head);

    if(head)
        std::cout << "pop from list " << Pop(head) << "\n";

    List(head);

}
