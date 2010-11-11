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
	cout << "after append of 9:" << endl;
	
    return 0;
}
