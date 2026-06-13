#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    Node A1(4);
    Node* Head = new Node(5);
    Head->next=NULL;
    cout<<A1.data<<endl;
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;
}