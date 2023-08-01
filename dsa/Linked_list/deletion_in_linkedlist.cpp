#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
     int data;
     Node* next;
    
    //Constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this ->next = NULL;
    }

        cout<<"Memmory is free for node with data :"<<value<<endl;
    }
};

Node* takeinput(int n){
    

    Node* head=NULL;
    Node* tail=NULL;

    
    while(n--)
    {
        int data;
         cin>>data;
                //First Node
       Node* newnode= new Node(data);
        if(head==NULL){
                head=newnode;
                tail=newnode;
        }
        else{
                
            tail->next=newnode;
            tail=newnode;
          }
    }
    return head;
}

void deletion(Node* &head, int p){

        if(head==NULL)
        {
            cout<<"Linkedlist is empty";
        }
        else if(p==1){
             Node* temp=head;   
           head=head->next;
            //memory free
            temp->next=NULL;
            delete temp;
        }
        else{
            Node* curr=head;
            Node* pre=NULL;

            int cnt=1;
            while(cnt<p)
            {
                pre=curr;
                curr=curr->next;
                cnt++;

            }
                pre->next=curr->next;
                curr->next=NULL;
                delete curr;
        }

}

void print(Node* &head){

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

void deleteele(int data,Node* &head){
    Node* curr=head;
    Node* pre=head;

    // if(curr->data==head->data)
    // {
    //    Node* temp=head;
    //    head=head->next;
    //    temp->next=NULL;
    //    delete temp;

    // }
    // else{
        
        
        while(curr!=NULL)
        {
            curr=curr->next;
            pre->next=curr;
            if(curr->data == data)
            {
                pre->next=curr->next;
                curr->next =NULL;
                delete curr;
                break;
            }
        }
    // }
}

int main()
{
    int n,p,data;
    cout<<"Enter the number of to nodes: ";
    cin>>n;
    Node* head=takeinput(n);
    
    print(head);
    cout<<endl;
    cout<<"Enter The position to delete : ";
    cin>>p;
    cout<<"Enter the data to delete: ";
    cin>>data;
    deletion(head,p);
    // deleteele(data, head);
    print(head);

}