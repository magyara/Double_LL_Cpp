/*****************************************************************
Implementation file for double linked list class

@author Ariel Magyar
@version February 2017
*****************************************************************/
#include <iostream>
#include "DLinkedList.h"
#include "Node.h"

/*****************************************************************
Constructor creates an empty double linked list
*****************************************************************/
template <typename Object>
DLinkedList<Object>::DLinkedList(){
	top = nullptr;
	tail = nullptr;
}

/*****************************************************************
Returns an int of the number of items the list holds
@return Number of items
*****************************************************************/
template <typename Object>
int DLinkedList<Object>::size(){
	// No nodes
	if(top == nullptr)
		return 0;

	// One node
	if(top == tail)
		return 1;
	
	// More than one
	int count = 1;
	Node<Object> *temp; 
	temp = top;
	while(temp != tail){
		temp = temp->getNext();
		count++;
	}
	return count;
}

/*****************************************************************
Removes all elements from the list
*****************************************************************/
template <typename Object>
void DLinkedList<Object>::clear(){
	top = nullptr;
	tail = nullptr;
}

/*****************************************************************
Inserts an object into the list at position ‘position’
@param o Object data to be inserted
@param position Desired position in list to be inserted
*****************************************************************/
template <typename Object>
void DLinkedList<Object>::insert(const Object &o, int position){
	Node<Object> *n = new Node<Object>(o);

	// Insert node into empty list
	if(size() == 0 && position == 0){
		std::cout << "Node " << o << " inserted into empty list\n";
		top = n;
		tail = n;			
		return;
	}

	// Position is last node
	if(position == size()){
		std::cout << "Node " << o << " inserted as last node\n";
		tail->setNext(n);
		n->setPrev(tail);
		tail = n;		
		return;
	}

	// Position is first node
	if(position == 0){
		std::cout << "Node " << o << " inserted as first node\n";
		top->setPrev(n);
		n->setNext(top);
		top = n;
		return;	
	}

	// Position is out of range
	if(position > size() || position < 0){
		std::cout << "Error: Position for node " << o << " out of range\n"; 
		return;
	}

	// Position is in middle
	int count = 0;
	Node<Object> *temp;
	temp = top;
	while(count != position){
		temp = temp->getNext();
		count++;
	}
	
	// Adjust position for node inserted
	n->setNext(temp);
	n->setPrev(temp->getPrev());
	
	// Adjust position for node above	
	temp->getPrev()->setNext(n);

	// Adjust position for node in inserted position
	temp->setPrev(n);
	
	std::cout << "Node " << o << " inserted in middle of list\n";
}

/*****************************************************************
Removes the object at position ‘position’ 
@param p Position of object to be removed
@return Object removed
*****************************************************************/
template <typename Object>
const Object& DLinkedList<Object>::remove(int position){
	// Position is out of range
	/*
	if(position > size()-1 || position < 0){
		std::cout << "Error: Position is out of range to be removed\n";
		return 0;
	}*/

	// Position is last node
	if(position == size()-1){
		
		Node<Object>* temp;
		temp = tail;
		tail->getPrev()->setNext(nullptr);
		tail = tail->getPrev();
		std::cout << "Removed " << temp->getData() << "\n";
		return temp->getData();
	}

	// Position is first node
	if(position == 0){
		Node<Object>* temp;
		temp = tail;
		top->getNext()->setPrev(nullptr);
		top->setNext(nullptr);
		top = top->getNext();
		std::cout << "Removed " << temp->getData() << "\n";
		return temp->getData();
	}

	int count = 0;
	Node<Object> *temp;
	temp = top;
	while(count != position){
		temp = temp->getNext();
		count++;
	}

	// Adjust position with surrounding nodes
	temp->getNext()->setPrev(temp->getPrev());
	temp->getPrev()->setNext(temp->getNext());

	// Adjust position of node to be removed to null
	temp->setNext(nullptr);
	temp->setPrev(nullptr);
	
	std::cout << "Removed " << temp->getData() << "\n";
	return temp->getData();
}

/*****************************************************************
Returns (does not remove) the object at position ‘position’ 
@param position Position of object to get
@return Object at given position
*****************************************************************/
template <typename Object>
const Object& DLinkedList<Object>::get(int position){
	// Position is out of range
	/*
	if(position > size()-1){
		std::cout << "Error: Position out of range\n";
		return 0;
	}
	*/	

	// Position is last node
	if(position == size()-1)
		return tail->getData();

	// Position is first node
	if(position == 0)
		return top->getData();

	int count = 0;
	Node<Object> *temp; 
	temp = top;
	while(count != position){
		temp = temp->getNext();
		count++;
	}
	return temp->getData();
}

/*****************************************************************
Prints the double linked list
*****************************************************************/
template <typename Object>
void DLinkedList<Object>::printList(){
	// Check for empty list
	if(size() == 0){
		std::cout << "List is empty\n";
		return;
	}
	
	Node<Object> *temp;
	temp = top;
	std::cout << "List: " << temp->getData() << " ";
	while(temp != tail){
		temp = temp->getNext();
		std::cout << temp->getData() << " ";
	}
	std::cout << "\n";
}
