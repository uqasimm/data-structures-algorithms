#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertHead(Node *head, int value)
{
    Node *temp = new Node(value, head);
    return temp;
}

Node *insertTail(Node *head, int value)
{
    if (head == nullptr)
    {
        return new Node(value);
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(value); // last element should point to nullptr
    temp->next = newNode;

    return head;
}

Node *insertK_th(Node *head, int value, int k)
{
    if (k == 0)
    {
        return head;
    }
    
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new Node(value);
        }
        else
        {
            cout << "Element Position is out of bounds!";
            return nullptr;
        }
    }

    if (k == 1)
    {
        Node *temp = new Node(value, head);
        return temp;
    }

    Node *temp = head;
    int counter = 0;
    while (temp != nullptr)
    {
        counter++;

        if (counter == k - 1)
        {
            Node *newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
        
    }
    return head;
    
}

int main()
{
    vector<int> arr = {2, 5, 7, 10};
    Node *head = convertArrToLL(arr);

    // head = insertHead(head, 1);

    // head = insertTail(head, 20);

    head = insertK_th(head, 100, 6);

    printLL(head);

    return 0;
}