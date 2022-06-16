#include<iostream>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;

void add(int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=value;
    temp->next=NULL;
    head=temp;
    
}
void beginning(int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node)); 
    temp->data=value;
    temp->next=head; 
    head->prev=temp; 
    head=temp;
    
}
void InsertEnd(int value){
    struct node *tp=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node)); 
    temp->data=value;
    temp->next=NULL; 
    while(tp->next!=NULL) 
    tp=tp->next;
    tp->next=temp;
    temp->prev=tp;
    
}
void AtPos(int value, int pos){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=value;
    temp->next=NULL;
    struct node *ptr1=head;
    struct node *ptr2=head;
    pos--;
    while(pos){
       ptr2=ptr2->next;
        pos--;
    }
    ptr1=ptr2->prev;
    ptr1->next=temp;
    temp->prev=ptr1;
    temp->next=ptr2;
    ptr2->prev=temp;
}

void deletion(int pos){
    struct node *ptr1=head;
    struct node *ptr2=head;
    while(pos>1){
        ptr1=ptr1->next;
        pos--;
    }
    ptr2=ptr1->prev;
    ptr2->next=ptr1->next;
    ptr1->next->prev=ptr2;
    delete(ptr1);
}

int main(){
    add(45);
    beginning(12);
    InsertEnd(92);
    AtPos(89, 3);
    deletion(3);
   
    
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
    return 0;
}