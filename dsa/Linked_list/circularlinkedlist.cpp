#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //decontructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }

        cout<<"memory is free node with data : "<<value<<endl;
    }

};

void insertNode(Node* &tail, int element, int d)
{
    //assumming that the element is present in the list 

    //empty list
    if(tail==NULL)
    {
        Node* newNode = new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        // non empty list

        Node* curr =tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found -> curr is represntig element 
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"Linkedlist is empty "<<endl;
        return ;
    }
    else{
        //non empty

        //assumiing that value is presennt in the linked list

        Node* pre=tail;
        Node* curr=pre->next;
        while(curr->data!=value){
            pre=curr;
            curr=curr->next;
        }

        pre->next=curr->next;

        //1 Node exist
        if(curr==pre){
            tail=NULL;
            
        }
        if(tail==curr){
            tail=pre;
        }

        curr->next=NULL;
        delete curr;
        
    }
}

void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main()
{

    Node* tail=NULL;

    //emptycase 
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);

    deleteNode(tail, 9);
    print(tail);

}