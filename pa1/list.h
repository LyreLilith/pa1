#ifndef LIST_H
#define LIST_H
#include <std.io>
#include "Node.h"

template<typename T1, typename T2>
class List {
public:
    List();  
    ~List(); 

    void insertAtFront(T1 value1, T2 value2);
    Node<T1, T2> getHead();
    int getSize();
    void deleteList();

private:
    Node<T1, T2>* Head;
    int size;
}
#endif
