#include <iostream>
using namespace std;
 
struct Node{
    int data;
    Node *next;
};
 

struct Node *head=NULL; 

void insertNode(int n){
    struct Node *newNode=new Node;
    newNode->data=n;
    newNode->next=head;
    head=newNode;
}
 

void display(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
void deleteF(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<head->data<<" is removed."<<endl;
    head=head->next;
}
void insrtLscnd(int x)
{
	struct Node *temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	struct Node *newnode=new Node;
	newnode->data=x;
	newnode->next=temp->next;
	temp->next=newnode;
		
}
		
void DeleteData (int x) 
{ 	struct Node *temp=head;
	struct Node *temp2;
	while(temp->next!=NULL && temp->next->data!=x)
	{
		temp=temp->next;
	}
	temp2=temp->next;
	temp->next=temp2->next;
	
	
}
int main()
{
	int ch,input,element; 
	while(true)
	{
		cout<<"ENTER YOUR CHOICE 1.input  2.deleteData 3.display::\n";
		cin>>ch;
		switch(ch)
		{
		case(1):
			cout<<"ENTER ELEMENT TO INSERT::";
			cin>>input;
			insertNode(input);
			break;	
		/*case(4):
			deleteF();
			break;*/
		case(2):
			cout<<"ENTER ELEMENT TO BE DELETED::";
			cin>>element;
			DeleteData(element);
			/*insrtLscnd(element);*/
			break;
		case(3):
			display();
			break;
		}	
	}
	while(ch>4)
	break;	
;}
