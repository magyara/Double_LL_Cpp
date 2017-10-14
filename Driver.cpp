/*****************************************************************
Driver file for double linked list

@author Ariel Magyar
@version February 2017
*****************************************************************/
#include <iostream>
#include "Node.h"
#include "DLinkedList.h"
#include <string>

template class DLinkedList<int>;
template class DLinkedList<std::string>;

int main(int argc, char **argv){
        //TODO: Implement error-checking
  
	std::cout << "\n---Demonstration of Double Linked List(Integers)---\n\n";

	// Create a new empty linked list
	std::cout << "\tTEST: Create Empty List\n";

	DLinkedList<int> myList;

	myList.printList();	
	std::cout << "Size: " << myList.size() << "\n";

	// Insert objects into list
	std::cout << "\n\tTEST: Insert Objects\n";
	myList.insert(1, 0);
	myList.insert(6, 0);
	myList.insert(8, 2);
	myList.insert(3, 1);
	myList.insert(5, 4);
	//myList.insert(0, 6);   // Invalid position
	//myList.insert(2, -1); // Invalid position
	
	// Verify objects inserted correctly 
	myList.printList();
	std::cout << "Size: " << myList.size() << "\n";	

	// Retrieve objects from list
	std::cout << "\n\tTEST: Retrieve Objects\n";
	std::cout << "Get first: " << myList.get(0) << "\n";
	std::cout << "Get second: " << myList.get(1) << "\n";
	std::cout << "Get last: " << myList.get(myList.size()-1) << "\n";

	// Remove object from list
	std::cout << "\n\tTEST: Remove Objects\n";
	myList.remove(2);
	myList.printList();
	myList.remove(1);
	myList.printList();
	//myList.remove(-1); // Invalid position
	//myList.remove(5);  // Invalid position
	//myList.printList();
	
	std::cout << "Size: " << myList.size() << "\n";

	// Clear the list
	std::cout << "\n\tTEST: Clear the List\n";
	myList.clear();
	myList.printList();
	std::cout << "Size: " << myList.size() << "\n";
	std::cout << "\n";

	std::cout << "\n---Demonstration of Double Linked List (Strings)---\n\n";

	// Create a new empty linked list
	std::cout << "\tTEST: Create Empty List\n";

	DLinkedList<std::string> myStringList;

	myList.printList();	
	std::cout << "Size: " << myStringList.size() << "\n";

	// Insert objects into list
	std::cout << "\n\tTEST: Insert Objects\n";
	myStringList.insert("cat", 0);
	myStringList.insert("dog", 0);
	myStringList.insert("sheep", 2);
	myStringList.insert("elephant", 1);
	myStringList.insert("duck", 4);
	//myStringList.insert("cow", 6);   // Invalid position
	//myStringList.insert("pig", -1); // Invalid position
	
	// Verify objects inserted correctly 
	myStringList.printList();
	std::cout << "Size: " << myStringList.size() << "\n";		

	// Retrieve objects from list
	std::cout << "\n\tTEST: Retrieve Objects\n";
	std::cout << "Get first: " << myStringList.get(0) << "\n";
	std::cout << "Get second: " << myStringList.get(1) << "\n";
	std::cout << "Get last: " << myStringList.get(myStringList.size()-1) << "\n";

	// Remove object from list
	std::cout << "\n\tTEST: Remove Objects\n";
	myStringList.remove(2);
	myStringList.printList();
	myStringList.remove(1);
	myStringList.printList();
	//myStringList.remove(-1); // Invalid position
	//myStringList.remove(5);  // Invalid position
	//myStringList.printList();
	
	std::cout << "Size: " << myStringList.size() << "\n";

	// Clear the list
	std::cout << "\n\tTEST: Clear the List\n";
	myStringList.clear();
	myStringList.printList();
	std::cout << "Size: " << myStringList.size() << "\n";

	std::cout << "\n";
}


