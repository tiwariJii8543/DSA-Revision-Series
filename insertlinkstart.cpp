#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){
    Node *Head = new Node(5);
    if(Head==NULL){
        Head=new Node(4);
    }else{
        Node*temp;
        temp=new Node(3);
        temp->next=Head;
        Head=temp;
    }
    cout<<Head->data<<endl;
}