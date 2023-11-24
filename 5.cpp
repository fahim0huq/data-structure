//5. Write a program to create a Linked List of n elements and then search an element from
//the list.

#include <iostream> 
using namespace std; 
class Node { 
public: 
	int data; 
	Node* next; 
	Node() 
	{ 
		data = 0; 
		next = NULL; 
	} 
	Node(int data) 
	{ 
		this->data = data; 
		this->next = NULL; 
	} 
};  
class Linkedlist { 
	Node* head; 

public: 
	Linkedlist() { head = NULL; } 
	void insertNode(int); 
    bool search(int);
}; 

void Linkedlist::insertNode(int data) 
{  
	Node* newNode = new Node(data); 

	if (head == NULL) { 
		head = newNode; 
		return; 
	} 
	Node* temp = head; 
	while (temp->next != NULL) { 
		temp = temp->next; 
	} 
	temp->next = newNode; 
} 
bool Linkedlist::search(int x) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == x) {
            return true;
        }
        temp = temp->next;
    }
    return false; 
}
int main() 
{ 
	Linkedlist list; 
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        list.insertNode(i); 
    }
    int tofind;
    cin >> tofind;
	if(list.search(tofind)) cout << "Found" <<endl;
    else cout << "Not found" <<endl;

	cout << endl; 
	return 0; 
}
