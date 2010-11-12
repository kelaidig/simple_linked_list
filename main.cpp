#include <iostream>
using namespace std;

#include "list.h"

int main ()
{
	linked_list list1;
	
	list1.append(3);
	list1.append(5);
	list1.append(7);
	
	linked_list list2 = list1;
	
	cout << "after copy constructor:" << endl;
	cout << list2 << endl;

	list2.append(9);
	cout << "after append of 9 to new list:" << endl;
	cout << list2 << endl;

	linked_list list3;
	
	list3 = list2;
	
	cout << "after overloaded assignement operator:" << endl;
	cout << list3 << endl;

	list3.append(11);
	cout << "after append of 11 to new list:" << endl;
	cout << list3 << endl;
	
	
    return 0;
}
