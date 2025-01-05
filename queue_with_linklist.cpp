
#include <bits/stdc++.h>
using namespace std;
struct node{
    int value;
    struct node *link;
};
struct node *first =(struct node*)malloc(sizeof(struct node));
struct node *last = first;

void insertList(int x){
    if(first->value == NULL){
        first->value = x;
        first->link = NULL;
    }
    else{
        struct node *newnode =(struct node*)malloc(sizeof(struct node));
        newnode->value= x;
        newnode->link= NULL;
        last->link =newnode;
        last = newnode;

    }
}

void printList(){
    struct node *temp = first;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->link;
    }
    cout<<endl;

}

void update(int x,int y){
    struct node *temp = first;
    while(temp!=NULL){
        if(temp->value ==x){
            temp->value = y;
            break;
        }
        temp=temp->link;
    }

}
void push(int x){
    insertList(x);
}
void pop(){

    first = first->link;
}




int main(){
    first->value = NULL;
    push(100);
    push(102);
    push(105);
    push(106);
    push(1089);
    printList();
    pop();
    printList();
    pop();
    pop();
    push(23);
    printList();



}
