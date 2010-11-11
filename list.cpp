#include "list.h"

list::list()
{ head = NULL; };

list::list(const list& orig)
{
    if (orig.head == NULL)  // empty list
    {
    	this->head = NULL;
    }
    else
    {
        node *curr_ptr = head;

list::~list();

void append(int nval)
{
    node *new_node;
    new_node->value = nval;
    new_node->next = NULL;

    if (head == NULL)
    {
    	head = new_node;
    }
    else
    {
        node *curr_ptr = head;
        while (curr_ptr->next != NULL)
	{
	    curr_ptr = curr_ptr->next;
	}
	curr_ptr->next = new_node;
    }
}

friend ostream& operator << (ostream &ostrm, const list& list)
{
    node *curr_ptr;
    while (curr_ptr != NULL)
    {
        ostrm << curr_ptr->value << " " ;
	curr_ptr = curr_ptr->next;
    }
    return ostrm;
}
