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

Node *deleteHead(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;

    return head;
}

// Node *deleteTail(Node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//     {
//         delete head;
//         return nullptr;
//     }

//     Node *temp = head;

//     while (temp->next->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = nullptr;

//     return head;
// }

// OR

Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;

    return head;
}

Node *deleteK_th(Node *head, int k)
{
    if (head == nullptr || k <= 0)
    {
        return nullptr;
    }

    int count = 0;
    Node *temp = head;
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
    Node *front = temp->next;

    if (back == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (back == nullptr)
    {
        return deleteHead(head);
    }
    else if (front == nullptr)
    {
        return deleteTail(head);
    }

    back->next = front;
    front->prev = back;
    delete temp;

    return head;
}

void deleteNode(Node *temp) // not for head node
{
    if (temp == nullptr)
    {
        return;
    }
    
    Node* back = temp->prev;
    Node* front = temp->next;

    if (back == nullptr && front == nullptr) // this is when there is only one node
    {
        delete temp;
        return;
    }
    

    if (front == nullptr)
    {
        back->next = nullptr;
        delete temp;
        return;
    }

    back->next = front;
    front->prev = back;
    delete temp;
}

int main()
{
    vector<int> arr = {10, 2, 6, 5, 3};
    Node *head = convertArrToDLL(arr);

    // head = deleteHead(head);

    // head = deleteTail(head);

    // head = deleteK_th(head, 3);

    deleteNode(head->next->next);
    printDLL(head);

    return 0;
}