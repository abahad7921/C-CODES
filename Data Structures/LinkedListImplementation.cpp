/**********
 * 
 * A C++ program to make a LinkedList
 * This program contains three methods of insertion: 1- insertAtfront
 *                                                   2- insertAtback
 *                                                   3- insertAfter
 * As the name of the functions clearly suggests 
 * 
 * And the last method is : Print method
 * 
 **********/

#include <iostream>
using namespace std;

class Node
{
    public:
            int data;
            Node* next;
};

Node* head;

void insertAtfront(int value)
{
    Node* temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
}

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

void insertAfter(int target,int value)
{   
    Node* temp= new Node();
    temp->data = value;
    if(target==1)
    {
        temp->next = head;
        head = temp;
    }
    
    Node* temp1 = head;
    for(int i=1;i<=target-1;i++)
    {
        temp1 = temp1->next;
    }
    
    temp->next = temp1->next;
    temp1->next = temp;
    
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
	
	insertAtfront(5);
	insertAtfront(10);
	insertAtfront(15);
	insertAtback(20);
	insertAfter(2,22);
	print();//15 10 22 5 20
	
	return 0;
}
