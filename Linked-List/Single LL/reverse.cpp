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
    if (arr.empty())
    {
        return nullptr;
    }

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

Node *reverseLLIterative(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *temp = head;
    Node *back = nullptr;
    while (temp != nullptr)
    {
        Node *front = temp->next;
        temp->next = back;
        back = temp;
        temp = front;
    }

    return back;
}

Node *reverseLLRecursive(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node* newHead = reverseLLRecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    
    return newHead;
}

int main()
{
    vector<int> arr = {10, 5, 6, 1, 4};
    Node *head = convertArrToLL(arr);

    // head = reverseLLIterative(head);
    head = reverseLLRecursive(head);

    printLL(head);

    return 0;
}