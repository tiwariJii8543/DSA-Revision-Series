#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        Node*next=nullptr;
    }
};

int main(){
    Node *Head = new Node(5);
    Node*temp;
    if(Head==NULL){
        Head=new Node(5);
    }else{
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp=new Node(4);
        temp->next=nullptr;
    }
}