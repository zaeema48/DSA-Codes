#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;
void Insertion(int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;

    if(head==NULL)
    head=temp;

    else{
        struct node *ptr;
        ptr=head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}
void traverse(){
    if(head==NULL)
    cout<<"Empty";

    else{
        struct node *ptr;
        ptr=head;
        while(ptr){
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
    }
    
}
int main(){
    Insertion(12);
    Insertion(23);
    Insertion(45);
    Insertion(62);
    Insertion(73);
    Insertion(91);
    Insertion(87);
    traverse();
    return 0;
}