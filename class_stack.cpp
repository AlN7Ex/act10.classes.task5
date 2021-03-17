#include "class_stack.h"

Stack::Stack(const int top)
{
	m_top = top;
}

void Stack::push(Item & item)
{
	if (m_top < MAX_STACK)
	{
		m_items[m_top++] = item;
	}
	else
	{
		std::cout << "Stack is full." << std::endl;
	}
}

void Stack::pop(Item & item)
{
	if (m_top > 0)
	{
		item = m_items[m_top--];
	}
	else
	{
		std::cout << "Stack is empty." << std::endl;
	}
}

void Stack::show() const
{
	if (m_top == 0)
	{
		std::cout << "Nothing to show. Stack is empty." << std::endl;
	}
	else
	{
		for (size_t index = 0; index < m_top; ++index)
		{
			std::cout << "Fullname: " << m_items[index].fullname << std::endl;
			std::cout << "Payment: " << m_items[index].payment << std::endl;
			std::cout << std::endl;
		}
		
	}
}
