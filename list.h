#ifndef LIST_H
#define LIST_H
/*
 *  list.h
 *  singly_linked_list
 *
 * testing out weird ideas...
 */

#include "node.h"
#include <iostream>
using namespace std;

class linked_list
{
private:
	node *head;

public:
	linked_list();	
	linked_list(const linked_list &);
	~linked_list();

	void append(int );
	
	linked_list& operator= (const linked_list& );
	
	friend ostream& operator<< (ostream& ostrm, const linked_list& );

};
#endif
