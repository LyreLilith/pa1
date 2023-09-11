#ifndef NODE_H
#define NODE_H

#include <std.io>

template<typename T1, typename T2>
class Node<T1, T2> : pNext(nullptr), vauleFirst(T1), valueSecond(T2)
{
public:
	T1 getT1();
	T2 getT2();
private:
	T1  valueFirst;
	T2 valueSecond;
	Node<T1, T2> pNext;

}

template<typename T1, typename T2>
	T1 Node::getT1()
	{
		return this->vauleFirst;

	}
