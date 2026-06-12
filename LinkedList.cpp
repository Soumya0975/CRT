#include<iostream>
using namespace std;


// Node class
class Node{
    public://variable declaration
    int data;// sirf value store karega
    Node *next;//next node ka address store karega
    Node(int value)//constructor to initialize the node(memory)
{
    data=value;// (10) (20) (40)
    next=NULL;
}

    
};
// insert data in the beginning of the linked list
void insertAtBeginning(Node* &head,int value)
{
    Node* newNode=new Node(value);//new node create kiya and value pass ki

}
//insert at end
void insertAtEnd(Node* &head,int value)
{
    Node* newNode=new Node(value);// (10) (20) (40)
        if(head==NULL)
        {
        head=newNode;
        return;//will return to main function
        }
        Node* temp=head;//temp pointer ko head se point karwaya
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;

}
void display(Node* head)
{
    if(head==NULL)
    {
        cout<<"linkedList is empty"<<endl;
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" | " << temp->next<<" -> ";//10 20 40
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;//store null value in head
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,40);
    //insert at beginning
    
    display(head);

}
