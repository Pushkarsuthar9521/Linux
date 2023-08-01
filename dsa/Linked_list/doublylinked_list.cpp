#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert(int data, Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {

        Node *temp = new Node(data);
        temp->next = head;
        head->pre = temp;
        head = temp;
    }
}

void insertatTail(Node *&tail, Node *&head, int data)
{
    if (head == NULL)
    {
        insert(data, head, tail);
        return;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    temp->pre = tail;
    tail = temp;
}

void insertatAny(int p, Node *&head, Node *&tail, int data)
{
    if (p == 1)
    {
        insert(data, head, tail);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < p - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertatTail(tail, head, data);
        return;
    }

    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next->pre = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->pre = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // Node* node1= new Node(10);
    // Node* head=node1;
    // Node* tail=node1;

    // insert when linked list is empty
    Node *head = NULL;
    Node *tail = NULL;

    insert(20, head, tail);
    print(head);

    insert(30, head, tail);
    print(head);

    insert(40, head, tail);
    print(head);

    insert(50, head, tail);
    print(head);

    insert(50, head, tail);
    print(head);

    insertatTail(tail, head, 200);
    print(head);

    // insertatAny(5,head,tail,100);
    // print(head);

    return 0;
}