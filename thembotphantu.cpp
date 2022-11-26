#include<iostream>
using namespace std;
//dinh nghia 1 node
struct Node{
	int data;
	Node *next;
};
struct List{
	//thuoc tinh
	Node *head;
	Node *tail;
	//phuong thuc
	List();
	Node* createNode(int x);
	void addFirst(int x);
	void addLast(int x);
	void insert(int x, int pos);
	void removeFirst();
	void removeLast();
	void remove(int pos);
	void print();
};
List::List(){
	head=tail=NULL;
}
Node* List::createNode(int x){
	Node *p=new Node;
	p->data=x;
	p->next=NULL;
	return p;
}
void List::addFirst(int x){
	Node *p=createNode(x);
	if(head==NULL)
		head=tail=p;
	else{
		p->next=head;
		head=p;
	}
}
void List::print(){
	for(Node *i=head;i!=NULL;i=i->next){
		cout<<i->data<<"\t";
	}
}
void List::addLast(int x){
	Node *p=createNode(x);
	if(head==NULL)
		head=tail=p;
	else{
		tail->next=p;
		tail=p;
	}
}
int main(){
	List l;
	l.addFirst(5);// l = 5 
	l.addFirst(10);// l = 10 5
	l.addFirst(15);// l = 15 10 5
	l.addFirst(20);// l = 20 15 10 5
	l.addLast(100); //l = 20 15 10 5 100
	l.addFirst(1);//l = 1 20 15 10 5 100
	l.addLast(2);//l = 1 20 15 10 5 100 2
	l.addFirst(87);//l = 87 1 20 15 10 5 100 2
	l.print();
}