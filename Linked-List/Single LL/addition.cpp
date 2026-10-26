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

Node *sumTwoLL(Node *head1, Node *head2)
{
    Node *t1 = head1;
    Node *t2 = head2;

    Node *dummyNode = new Node(-1);
    Node *current = dummyNode;
    int carry = 0;

    while (t1 != nullptr || t2 != nullptr)
    {
        int sum = carry;
        if (t1)
        {
            sum += t1->data;
            t1 = t1->next;
        }

        if (t2)
        {
            sum += t2->data;
            t2 = t2->next;
        }

        Node *sumNode = new Node(sum % 10);
        carry = sum / 10;

        current->next = sumNode;
        current = current->next;
    }

    if (carry)
    {
        Node *carryNode = new Node(carry);
        current->next = carryNode;
    }

    return dummyNode->next;
}

int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {4, 5, 6};

    Node *firstLL = convertArrToLL(arr1);
    Node *secondLL = convertArrToLL(arr2);

    Node *sum = sumTwoLL(firstLL, secondLL);
    printLL(sum);

    return 0;
}