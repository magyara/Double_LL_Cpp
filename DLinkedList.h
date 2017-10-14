/*****************************************************************
Interface file for double linked list class

@author Ariel Magyar
@version February 2017
*****************************************************************/
#ifndef H_DLINKEDLIST
#define H_DLINKEDLIST

template <typename Object>
class Node;

template <typename Object>
class DLinkedList {
	public:
		// Constructor
		DLinkedList();

		// Required functions	
		int size();
		void clear();
		void insert(const Object &o, int position);
		const Object& remove(int position);
		const Object& get(int position); 

		// Print function
		void printList();

	private:
		Node<Object> *top;	/** Node at top of list **/
		Node<Object> *tail;	/** Node at bottom of list **/
};
#endif
