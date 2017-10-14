/*****************************************************************
Interface file for node class to be used with double linked 
list

@author Ariel Magyar
@version February 2017
*****************************************************************/
#ifndef H_NODE
#define H_NODE

template <typename Object>

class Node { 
 	public:
 		// Constructor 
 		//Node(const Object &data, Node next, Node prev); 
 		Node(const Object &data);		 
		
 		// Get functions
 		const Object& getData(); 
 		Node* getNext(); 
 		Node* getPrev(); 

 		// Set functions
 		void setData(const Object &data); 
 		void setNext(Node *next); 
 		void setPrev(Node *prev);

 	private: 
 		Object data;	/** Data to be held in node **/
 		Node<Object> *next; 	/** Following node **/
 		Node<Object> *prev;	/** Previous node **/
}; 
 #endif

