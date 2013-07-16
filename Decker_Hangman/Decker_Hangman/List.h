#ifndef LIST_H
#define LIST_H

#include <string>

struct Node
{
	Node * next;
	std::string word;
};

class List
{
private:
	void add (Node*, std::string);
	void del (Node*, char);
public:
	void add (std::string);
	void del (char);
}

#endif //LIST_H