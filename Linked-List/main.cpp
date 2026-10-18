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

Node* convertArrayToLL(vector<int> &arr){
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

int lengthOfLL(Node* head){
    int counter = 0;
    Node* temp = head;
    while(temp){
        // cout << temp->data << " ";
        temp = temp->next;
        counter++;
    }
    return counter;
}

int checkIfPresent(Node* head, int value){
    Node* temp = head;
    while(temp){
        if (temp->data == value)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    // Node* y = new Node(arr[0]);
    // Node* z = new Node(arr[1]);
    // y->next = z;
    // cout << "First Node Address: " << y << endl << "First Node Data: " << y->data << endl << "Next Node Address: " << y->next << endl << "Next Node Data: " << y->next->data;

    Node* head = convertArrayToLL(arr);
    // // cout << head->data << endl << head->next->data << endl << head->next->next->data;
    
    // Traversal through linkedlist
    
    // Node* temp = head;

    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // cout << lengthOfLL(head);

    cout << checkIfPresent(head, 2);

    return 0;
}