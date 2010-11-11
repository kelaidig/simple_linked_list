/*
 *  linked_list.cpp
 *  singly_linked_list
 *
 *  Created by Keith E. Laidig on 11/4/10.
 *  Copyright 2010 HHMI/UW. All rights reserved.
 *
 */

#include "linked_list.h"
#include <iostream>

linked_list::linked_list()
{ head = NULL; }

linked_list::linked_list(const linked_list &orig)
{
	if (orig.head == NULL)  // an empty list
	{
		this->head = NULL; 
	}
	else 
	{
		node *curr_ptr = orig.head;
		while (curr_ptr != NULL)
		{
			append(curr_ptr->value);
			curr_ptr = curr_ptr->next;
		}
	}
}

linked_list::~linked_list()
{	
	node *curr_ptr = this->head;
	node *next_ptr = NULL;
	
	while (curr_ptr != NULL)  // walk to end of list
	{
		next_ptr = curr_ptr->next;
		delete curr_ptr;
		curr_ptr = next_ptr;
	}
}

void linked_list::append(int nv)
{
	node *curr_ptr = this->head;
	node *new_node;
	
	new_node = new node;
	new_node->value = nv;
	new_node->next = NULL;
	
	if (head == NULL)  // an empty list - this is it.
	{
		this->head = new_node;
		return;
	}
	else
	{
		while (curr_ptr->next != NULL)  // walk to end of list
		{
			curr_ptr = curr_ptr->next;
		}
		curr_ptr->next = new_node;  // stuff in new node.
	}
}

std::ostream& operator<< (std::ostream& ostrm, const linked_list& list)
{
	node *curr_ptr = list.head;
	while (curr_ptr != NULL)
	{
		ostrm << curr_ptr->value << " " ;
		curr_ptr = curr_ptr->next;
	}
	return ostrm;
}