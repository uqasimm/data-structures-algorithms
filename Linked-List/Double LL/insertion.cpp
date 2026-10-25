#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convertArrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, mover);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void printDLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

Node *insertHead(Node *head, int value) // insertion is before the head
{
    if (head == nullptr)
    {
        return new Node(value);
    }

    Node *temp = new Node(value, head, nullptr);
    head->prev = temp;

    return temp;
}

Node *insertTail(Node *head, int value) // insertion is before the tail
{
    if (head == nullptr)
    {
        return new Node(value);
    }

    if (head->next == nullptr)
    {
        Node *newNode = new Node(value, head, nullptr);
        head->prev = newNode;
        return newNode;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(value, temp, temp->prev);
    temp->prev->next = newNode;
    temp->prev = newNode;

    return head;
}

Node *insertK_th(Node *head, int value, int k)
{
    if (head == nullptr || k <= 0)
    {
        return nullptr;
    }

    if (k == 1)
    {
        Node *newNode = new Node(value, head, nullptr);
        head->prev = newNode;

        return newNode;
    }

    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        if (count == k)
        {
            break;
        }
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        return head;
    }

    Node *back = temp->prev;

    Node *newNode = new Node(value, temp, back);
    temp->prev = newNode;
    back->next = newNode;

    return head;
}

void insertNode(Node *temp, int value)
{
    if (temp == nullptr)
    {
        return;
    }

    Node *back = temp->prev;
    Node* newNode = new Node(value, temp, back);
    back->next = newNode;
    temp->prev = newNode;
}

int main()
{
    vector<int> arr = {10, 5, 2, 6, 7};
    Node *head = convertArrToDLL(arr);

    // head = insertHead(head, 7);

    // head = insertTail(head, 2);

    // head = insertK_th(head, 3, 1);

    insertNode(head->next, 100);

    printDLL(head);

    return 0;
}