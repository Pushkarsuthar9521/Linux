// Double the value of Nth Node from the End in a Linked List

#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;

    //Constructor for create node
   Node(int data){
    this->data=data;
    this->next=NULL;
   }

};

Node* takeinput()
{
    Node* head=NULL;
    Node* tail=NULL;

    int data;
    cin>>data;
    while(data!=-1)
    {
        Node* newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;

        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;

    }
    return head;
}

void modify(Node* &head, int p){
    Node* temp=head;
    int cnt=1;
    while(cnt!=p+1){
        temp=temp->next;
        cnt++;
    }

    cout<<"data at pos: "<<temp->data;
    temp->data=2*(temp->data);
    cout<<"\nAfter double :  "<<temp->data;
    cout<<endl;

}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}

int main()
{

    int p,n;
    cout<<"Enter the element of link list: ";
    Node* head= takeinput();
    cout<<"Enter the postition where you double the data: ";
    cin>>p;

    modify(head,p);
    cout<<"The New Linkedlist : ";
    print(head);

   return 0;
}