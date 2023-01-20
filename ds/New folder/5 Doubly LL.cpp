#include<iostream>

using namespace std;

class node{
	public :
		int rno;
		float marks;
		node *next, *prev;
};

class Student{
	node* head;
	public:
		Student(){
			head = NULL;
		}
		node* getData();
		void create();
		void display();
		void insert();
		void del();
		void search();
		int length();
		node* swap(node *p1, node*p2);
		void sort();
		void revdisplay();
		void merge(Student s1, Student s2);
};

node* Student::getData(){
	node *newNode = new node();
	cout<<"-----------------------------------"<<endl;
	cout<<"Enter Roll Number : ";
	cin>>newNode->rno;
	
	cout<<"Enter Marks : ";
	cin>>newNode->marks;
	
	return newNode;
}

void Student::create(){
	node *newNode, *curr;
	int ch;
	do{
		newNode = getData();
	
		if(head == NULL){
			newNode->next = NULL;
			newNode->prev = NULL;
			head = newNode;
		}
		else{
			curr = head;
			while(curr->next != NULL){
				curr = curr->next;
			}
			newNode->next = NULL;
			curr->next = newNode;
			newNode->prev = curr;
		}
		
		cout<<"\nPress 1 to Add :  "<<endl;
		cin>>ch;
	}while(ch == 1);
}

void Student::display(){
	
	if(head == NULL){
		cout<<"Oops ..! List is Empty :("<<endl;
	}else{
		node *curr;
		curr = head;
		cout<<"Roll No\tMarks"<<endl;
		cout<<"----------------"<<endl;
		while(curr != NULL){
			cout<<curr->rno<<"\t"<<curr->marks<<endl;
			curr = curr->next;
		}
	}
}

void Student::insert(){
	node *newNode, *curr;
	int rno, flag, ch;
	
	cout<<"1 - Start\t2 - Between\t3 - Last"<<endl;
	cout<<"Enter Your Choice : "<<endl;
	cin>>ch;
	newNode = getData();
	if(ch == 1){
		newNode->prev = NULL;
		newNode->next = head;
		head = newNode;
	}
	else if(ch == 2){	
	
		cout<<"Enter Position after you want to insert  : ";
		cin>>rno;
		
		flag = 0;
		
		curr = head;
		while(curr != NULL){
			if(curr->rno == rno){
				flag = 1;
				newNode->next = curr->next;
				newNode->prev = curr;
				curr->next = newNode;
				curr->next->prev = newNode;
				cout<<"Found : "<<curr->rno<<endl;;
				break;
			}
			curr = curr->next;
		}
		if(flag == 0){
			cout<<"Student not Found.";
		}
		
	}else if(ch == 3){
		newNode->next = NULL;
		curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		newNode->prev = curr;
		curr->next = newNode;
	}
}

void Student::del(){
	node *curr, *prev;;
	if(head == NULL){
		cout<<"Oops ..! List is Empty :("<<endl;
	}else{
		node *prev;
		int ch, flag = 0, rno;
		
		cout<<"\n1 - Delete First\t2 - Delete Middle\t3 - Delete Last"<<endl;
		cout<<"````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"Enter Choice : ";
		cin>>ch;
		if(ch == 1){
			curr = head;
			head = head->next;
			head->prev = NULL;
			delete(curr);
		}
		else if(ch == 2){
			curr = head;
			prev = head;
			
			cout<<"Enter roll number you want to delete : ";
			cin>>rno;
			
			while(curr != NULL){
				if(curr->rno == rno){
					flag = 1;
					prev->next = curr->next;
					curr->next->prev = prev;
					delete(curr);
					break;
				}
				prev = curr;
				curr = curr->next;
			}
		}
		else if(ch == 3){
			curr = head;
			
			while(curr->next != NULL){				
				prev = curr;
				curr = curr->next;
			}
			prev->next = NULL;
			delete(curr);
		}
	}
}

void Student::search(){
	node *curr;
	int rno, flag;
	cout<<"Enter Roll Number to Search : ";
	cin>>rno;
	flag = 0;
	curr = head;
	while(curr->next != NULL){
		if(curr->rno == rno){
			flag = 1;
			cout<<"Student Found..."<<endl;
			cout<<"Roll Number : "<<curr->rno<<endl;
			break;
		}
		curr = curr->next;	
	}
	if(flag == 0){
		cout<<"Student not Found."<<endl;
	}
}

node* Student::swap(node *p1,node *p2){
	
	node *a,*b;
	
	a = p1->prev;
	b = p2->next;
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

int Student::length(){
	int l=0;
	node *p;
	p=head;
	while(p!=NULL){
		l++;
		p=p->next;
	}
	return l;
}

void Student::sort(){
	
	node *temp,*p1,*p2;
	int i,j,l=length(),swapped=0;
	for(i=0;i<l;i++){
		swapped=0;
		temp=head;
		for(j=0;j<l-1-i;j++){
			p1=temp;
			p2=temp->next;
			if(p1->marks>p2->marks){
				temp=swap(p1,p2);
				swapped=1;
			}
			temp=temp->next;
		}
		if(swapped==0){
			break;
		}
	}
	cout<<"Sorted : "<<endl;
	display();	
}

void Student::revdisplay(){
	node *p;
	node *a;
	if(head == NULL){
		cout<<"List is Empty. "<<endl;
	}
	else{
		p = head;
		cout<<"Given List : "<<endl;
		while(p->next != NULL){
			cout<<p->rno<<endl;
			p = p->next;
		}
		p = p->prev;
		cout<<"List in Reverse Order : "<<endl;
		while(p != NULL){
			cout<<p->rno<<endl;
			p = p->prev;
		}
	}
}

void Student::merge(Student s1, Student s2){
	
	node *curr1, *curr2;
	curr1 = s1.head;
	curr2 = s2.head;
	
	if(curr1 == NULL){
		cout<<"List 1 Empty.";
	}
	else if(curr2 == NULL){
		cout<<"List 2 Empty.";
	}
	else{
		while(curr1->next != NULL){
			curr1 = curr1->next;
		}
		curr1->next = curr2;
		curr2->prev = curr1;	
	}
}

int main(){
	Student si, s1, s2;
	int choice;
	do{
		cout<<"\n1 - Create\t2 - Insert\t3 - Display\t4 - Delete\t5 - Search\t6 - Sort\t7 - Reverse\t8 - Merge - \t9 - Exit"<<endl;
		cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"Enter Choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				si.create();
				si.display();				
				break;
			case 2:
				si.insert();
				break;
			case 3:
				si.display();
				break;
			case 4:
				si.del();
				break;
			case 5:
				si.search();
				break;
			case 6:
				si.sort();
				break;
			case 7:
				si.revdisplay();
				break;
			case 8:
				s1.create();
				s2.merge(si, s1);
				break;
			case 9:
				cout<<"\n\nThank You ! Visit Again :)"<<endl;
				exit(0);
				break;
			default:
				cout<<"Invalid Choice :("<<endl;
		}
		cout<<"Press 1 to Continue [Menu] : ";
		cin>>choice;
	}while(choice == 1);
	return 0;
}


// doubly swap simple.


//void Student::sort(){
//	
//	node *curr, *prev;
//	
//	node *temp = new node();
//	
//	for(prev = head; prev != NULL; prev = prev->next){
//		
//		for(curr = prev->next; curr != NULL; curr = curr->next){
//		
//			if(prev->rno > curr->rno){
//				
//				temp->rno = prev->rno;
//				prev->rno = curr->rno;
//				curr->rno = temp->rno;
//			}
//		}
//	}
//	display();	
//}
