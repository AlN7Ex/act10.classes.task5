#include "class_stack.h"

#include <cstring>
#include <cctype>

int main()
{
	using namespace std;

	char name[MAX_STRING];
	char flag;
	double money;
	Item man;
	Stack person;

	cout << "Enter 'a' to add, 'd' to delete, 's' to show stack or 'q' to quit." << endl;

	while (cin >> flag && toupper(flag) != 'Q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}

		switch(flag)
		{
			case 'A':
			case 'a':
				cout << "Enter a person:" << endl;
				cin.get(name, MAX_STRING);
				cin.get();
				cout << "Enter money: " << endl;
				cin >> money;
				cin.get();

				strncpy(man.fullname, name, MAX_STRING);
				man.payment = money;

				person.push(man);
				break;
			case 'D':
			case 'd':
				person.pop(man);
				break;
			case 'S':
			case 's':
				person.show();
				break;
			default:
				cout << "Default;" << endl;
				break;
		}
		cout << "Enter 'a' to add, 'd' to delete, 's' to show stack or 'q' to quit." << endl;
	}

	return 0;
}
