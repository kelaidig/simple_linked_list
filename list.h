#ifndef LINKED_LIST_H
#define LINKED_LIST_H
/*
 *  linked_list.h
 *  singly_linked_list
 *
 *  Created by Keith E. Laidig on 11/4/10.
 *  Copyright 2010 HHMI/UW. All rights reserved.
 *
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
	
	friend ostream& operator<< (ostream& ostrm, const linked_list& );

};
#endif