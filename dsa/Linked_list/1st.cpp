#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertFirst(Node* &head,int data)
{
    //create a new node
    Node* temp = new Node(data);
     temp->next=head;
     head=temp;

}

//insert at last 
void insertLast(Node* &last, int data)
{
    Node* temp = new Node(data);
    last->next=temp;
    last=last->next;
    

}

void insertPos(Node* &tail,Node* &head,int p, int data)
{
    if(p==1)
    {
        insertFirst(head, data);
        return;
    }
    
    
    Node* temp =head;
    int cnt =1;
    while(cnt<p-1)
    {
        temp=temp->next;
        cnt++;
    }

    // inserting at Last Position
    if(temp->next==NULL)
    {
        insertLast(tail,data);
    }

    Node* nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;
    temp->next=nodetoinsert;

}

void printlist(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;

}

int main()
{
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // int n;
    // cout<<"Enter the where u want to insert the data: ";
    // cout<<"1.Insert at first: \n 2. Insert at last :";
    // cin>>n;
    
    // head pointer to first node
    Node* head = node1;
    printlist(head);
    Node* tail=node1;
    insertFirst(head, 12);

    printlist(head);

    insertLast(tail, 200);

    printlist(head);
    
    int p;
    cout<<"Enter the position :";
    cin>>p;

    insertPos(tail, head, p, 22);
    printlist(head);
    // while(n){
        
    //     switch(n);
    //     {
           

    //         case 2: insertLast();

    //         default : break;
                    
    //     }
    // }
}