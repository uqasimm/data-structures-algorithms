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

Node* reverseDLL(Node* head){
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    
    Node* current = head;
    Node* temp = nullptr;
    
    while (current != nullptr)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        head = current;
        current = current->prev;
    }

    return head;
}

int main()
{
    vector<int> arr = {10, 4, 2, 6, 7};
    Node *head = convertArrToDLL(arr);

    printDLL(head);

    return 0;
}