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
        cout<<temp->value<<endl;
        temp=temp->link;
    }

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

int main(){
    first->value = NULL;
    insertList(144);
    insertList(109);
    insertList(105);
    insertList(103);
    insertList(102);
    printList();
    update(109,190);
    update(105,150);
    cout<<"updatedlist :"<<endl;
    printList();


}
