/**********
 * 
 * A C++ program to reverse a LinkedList using the iterative way
 * 
 *********/

#include <iostream>
using namespace std;

class Node
{
    public:
            int data;
            Node* next;
};

Node* head;



void insertAtback(int value)
{
    Node* temp = new Node();
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL)
    {
        head = temp;
        return;
    }
    
    Node* temp1 = head;
    
    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }
    
    temp1->next = temp;
}


void ReverseIterative()
{
    Node* current,*prev,*Localnext;
    
    current = head;
    prev = NULL;
    
    while(Localnext!=NULL)
    {
        Localnext = current->next;
        current->next = prev;
        prev = current;
        current = Localnext;
    }
    
    head = prev;
    
}
void print()
{
    Node* temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
	
	head = NULL;
	
	//Just for illustration
	
	insertAtback(5);
	insertAtback(10);
	insertAtback(15);
	insertAtback(20);
	insertAtback(22);
	print();//5 10 15 20 22
    cout<<endl;
	
	ReverseIterative();
	print();//22 20 15 10 5	
	
    return 0;
}
