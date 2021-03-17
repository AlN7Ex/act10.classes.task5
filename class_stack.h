#ifndef STACK_H_
#define STACK_H_

#include <iostream>

constexpr size_t MAX_STRING = 40;
constexpr size_t MAX_STACK = 5;

struct customer
{
	char fullname[MAX_STRING];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	Item m_items[MAX_STACK];
	int m_top;
public:
	Stack(int top = 0);
	void push(Item & item);
	void pop(Item & item);
	void show() const;
};

#endif
