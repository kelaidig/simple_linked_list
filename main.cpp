#include <iostream>
using namespace std;

#include "linked_list.h"

int main ()
{
	linked_list list1;
	
	list1.append(3);
	list1.append(5);
	list1.append(7);
	
	linked_list list2 = list1;
	
	cout << list2 << endl;
	
    return 0;
}
