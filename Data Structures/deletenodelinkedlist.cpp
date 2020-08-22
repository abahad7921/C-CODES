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

void deleteNode(int target)
{
    Node* temp = head;

    if(target==1)
    {
        head = temp->next;
        free(temp);
    }

    for(int i=0;i<target-2;i++)
    {
        temp = temp->next;
    }

    Node* temp2= temp->next;
    temp->next = temp2->next;

    free(temp2);
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
	
        deleteNode(3);
        print();//5 10 20 22
	
	
    return 0;
}
