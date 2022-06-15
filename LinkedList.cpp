#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;
void insertion(){
    int value;
    cout<<"enter value";
    cin>>value;
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
void reverse()
    {
        struct node *ptr=head, *prvs=NULL;
        while(head!=NULL){
            ptr=head->link;
            head->link=prvs;
            prvs=head;
            head=ptr;
        }
        head=prvs;

    }
int main(){
  cout<<"-------------------LINKED_LIST---------------------\n";
	cout<<"1-INSERTION\n2-DELETION\n3-ADD_IN_START/BETWEEN\n4-TRAVERSE\n5-LENGTH\n6-REVERSE\n7-Search\n8-EXIT\n\n";
	int x;
	while (1)
	{
	cout<<"Enter the operation you want to perform: ";
	cin>>x;
	
		switch (x)
		{
		case 1: insertion();
			break;
		// case 2: dlt ();
		// 	break;
		// case 3: add_between();
		// 	break;
		case 4: traverse();
			break;
		// case 5: length();
		// 	break;
		case 6: reverse();
			break;
		// case 7:search();
		// 	break;
		case 8: cout<<"Exiting...........\n";
			exit(1);
		default: cout<<"CHOOSE FROM THE GIVEN OPTION..!!\n";
			break;
		}
    return 0;
}
}
