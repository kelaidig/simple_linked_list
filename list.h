#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

class list
{
private:
	node *head;

public:
	list();
	list(const list& );
	~list();

	void append();
	friend ostream& operator << (ostream &, const list& );

#endif
