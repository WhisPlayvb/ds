#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node *prev;
};
class dll{
node *head;
public:
dll(){
head=NULL;
}
void create();
void display();
int length();
void search();
void insert();
void revdisplay();
void sort();
node* swap(node *p1,node *p2);
void merge(dll d1,dll d2);
};
void dll :: create(){
int ch;
node *newnode,*temp;
do{
newnode = new node;
cout<<"Enter data"<<endl;
cin>>newnode->data;
newnode->prev=NULL;
newnode->next=NULL;
if(head==NULL){
head=newnode;
}
else{
temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;

}
cout<<"------------------------------------------------------------------";
cout<<"Do you want to continue : "<<endl;
cout<<"1. Yes "<<endl;
cout<<"0. No "<<endl;
cout<<"------------------------------------------------------------------";
cin>>ch;
}
while(ch==1);
}
void dll :: display(){
node *temp;
if(head==NULL){
cout<<"List is empty";
}
else{
temp=head;
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->next;
}
}
}
int dll :: length(){
int l=0;
node *temp;
temp=head;
while(temp!=NULL){
l++;
temp=temp->next;
}
return l;
}
node* dll :: swap(node *p1,node *p2){
node *a,*b;
a=p1->prev;
b=p2->next;
if(p1==head){
head = head->next;
p2->next=p1;
p1->prev=p2;
p2->prev=a; //NULL
p1->next=b;
b->prev=p1;

}
else if(p2->next==NULL){
p2->next=p1;
p1->prev=p2;
p2->prev=a;
a->next=p2;
 p1->next=b; //NULL
 }
 else{
 p2->next=p1;
 p1->prev=p2;
 p2->prev=a;
 a->next=p2;
 p1->next=b;
 b->prev=p1;
 }
 return p2;
 }
 void dll :: sort(){
 node *newnode,*p1,*p2;
 int i,j,l=length(),swapped=0;
 for(i=0;i<l;i++){
 swapped=0;
 newnode=head;
 for(j=0;j<l-1-i;j++){
 p1=newnode;
 p2=newnode->next;
 if(p1->data>p2->data){
 newnode=swap(p1,p2);
 swapped=1;
 }
 newnode=newnode->next;
 }
 if(swapped==0){
 break;
 }
 }
 cout<<"Sorted"<<endl;
 display();
 }
 void dll :: merge(dll d1,dll d2){
 node *t1=d1.head;
 node *t2=d2.head;
 node *t3=head;
 if(t1==NULL){
 //head = t2
 return (t1);
 }
 if(t2==NULL){
 //head = t1;
 return (t2);
 }
     temp=t1;
     while(temp->next!=NULL)
     {
     	temp=temp->next;
	 }
 	     temp->next =t2;
 	     return(t1);
 display();
 }
 void dll :: search(){
 int d,flag=0;
 node *temp;
 if(head==NULL){
 cout<<"List is empty";
 }
 else{
 cout<<"Enter data you want to search : ";
 cin>>d;
 temp=head;
 while(temp!=NULL){
 if(temp->data==d){
 cout<<"Node found"<<endl;
 flag=1;
 break;
 }
 temp=temp->next;
 }
 if(flag==0){
 cout<<"Not found"<<endl;
 }
 }
 }
 void dll :: insert(){
 int ch=0,d,flag=0;
 node *newnode;
 node *temp;
 
 cout<<"\n ========================\n";
 cout<<"Enter 1.Insert at start "<<endl;
 cout<<"Enter 2.Insert in between "<<endl;
 cout<<"Enter 3.Insert at end "<<endl;
 cout<<"\n ========================\n";
 cin>>ch;
 if(ch==1){
 newnode = new node;
 cout<<"Enter node : "<<endl;
 cin>>newnode->data;
 newnode->next=head;
 head = newnode;
 }
 else if(ch==2){
 cout<<"Enter node after which you want to insert : "<<endl;
 cin>>d;
 temp=head;
 while(temp!=NULL){
 if(temp->data==d){
 cout<<"Node found ."<<endl;
 cout<<"Enter new node : "<<endl;
 newnode=new node;
 cin>>newnode->data;
 newnode->next=temp->next;
 temp->next=newnode;
 flag=1;
 break;
 }
 temp=temp->next;
 }
 if(flag==0){
 cout<<"Node not found"<<endl;
 }
 }
 else{
 newnode=new node;
 cout<<"Enter new node : "<<endl;
 cin>>newnode->data;
 newnode->next=NULL;
 temp=head;
 while(temp->next!=NULL){
 temp=temp->next;
 }
 temp->next=newnode;
 }
 }
 void dll :: revdisplay(){
 node *temp;
 node *a;
 if(head==NULL){
 cout<<"List is empty"<<endl;
 }
 else{
 temp=head;
 a=head;
 while(temp!=0){
 cout<<temp->data<<endl;
 temp=temp->next;
 }
 temp=temp->prev;
 while(temp!=NULL){
 cout<<temp->data<<endl;
 temp=temp->prev;

 }
 }
 }
 int main()
 {
 dll linkedlist,l1,l2,l3;
 
 cout<<"****** DOUBLY LINKED LIST OPERATIONS ****** \n\n";
 
 
 
 l1.create();
 l1.display();
 l1.sort();


 l2.create();
 l2.display();
 l2.sort();


 l3.merge(l1,l2);
 }
 
