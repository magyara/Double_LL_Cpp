/*****************************************************************
Implementation file for node class to be used with double 
linked list

@author Ariel Magyar
@version February 2017
*****************************************************************/
#include "Node.h"

/*****************************************************************
Constructor creates a new node
@param data Information in node
*****************************************************************/
template <typename Object>
Node<Object>::Node(const Object &data){
	this->data = data;
	this->prev = nullptr;
	this->next = nullptr;
}

/*****************************************************************
Returns the data inside a node
@return Data inside the node
*****************************************************************/
template <typename Object>
const Object& Node<Object>::getData(){
	return this->data;
}

/*****************************************************************
Returns the following node
@return Next node
*****************************************************************/
template <typename Object>
Node<Object>* Node<Object>::getNext(){
	return this->next;
}

/*****************************************************************
Returns the previous node
@return Previous node
*****************************************************************/
template <typename Object>
Node<Object>* Node<Object>::getPrev(){
	return this->prev;
}

/*****************************************************************
Sets the data for a node
@param data Data to put in node
*****************************************************************/
template <typename Object>
void Node<Object>::setData(const Object &data){
	this->data = data;
}

/*****************************************************************
Sets the following node
@param next Following node
*****************************************************************/
template <typename Object>
void Node<Object>::setNext(Node *next){
	this->next = next;
}

/*****************************************************************
Sets the previous node
@param prev Previous node
*****************************************************************/
template <typename Object>
void Node<Object>::setPrev(Node *prev){
	this->prev = prev;
}

