#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* convertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);

    Node* mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    
}

Node* deleteHead(Node* head){
    if (head == nullptr)
    {
        return nullptr;
    }
    
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

void printLL(Node* head){
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    
}


int main(){
    vector<int> arr = {2, 5, 7, 10};
    Node* head = convertArrToLL(arr);

    // Node* value = head;
    // while (value)
    // {
    //     cout << value->data << " ";
    //     value = value->next;
    // }

    // cout << endl;

    // Node* newHead = deleteHead(head);
    // Node* newValue = newHead;
    // while (newValue)
    // {
    //     cout << newValue->data << " ";
    //     newValue = newValue->next;
    // }

    head = deleteHead(head);
    printLL(head);
    
    return 0;
}