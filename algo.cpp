#include <iostream> 
#include <stack> 
#include <bits/stdc++.h>
using namespace std;

/*
void showstack(stack <int> s){
	while(!s.empty()){
		cout << s.top()<<endl;
		s.pop();
	}
}

int main(){
	stack <int> s;
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(14);
	

	showstack(s);
}
*/

//
//int main(){
//	int m;
//	cin>>m;
//	int next,a[m+1],i,j;
//	for(i=0;i<m;i++)
//	cin>>a[m];
//	for(i=0;i<m;i++){
//		next=-1;
//		for(j=i+1;j<m;j++){
//			if(a[i]<a[j]){
//				next=a[j];
//				break;
//			}
//		}
//		cout<<next<<endl;
//	}
//}


/*
#include<bits/stdc++.h>
using namespace std;
#include<deque>
int main(){
	deque<int> m;
	m.push_front(1);
	m.push_front(2);
	m.push_front(3);
	m.push_front(4);
	m.push_front(5);
	
//	for(deque<int> :: iterator it=m.begin();it!=m.end();it++){
//		cout<<*it;
//	}

	return 0;	
}
*/


struct Node{
	int data;
	Node *next;
};
/*
int insert(Node **root,int item){
	Node *temp = new Node;
	temp->data = item;
	temp->next = *root;
	*root = temp;
}
void display(Node *root){
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->next;
	}
}

Node *arrayToList(int a[],int n){
	Node *root = NULL;
	for(int i=0;i<n;i++)
		insert(&root,a[i]);
	return root;	
}

int main(){
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	Node *root = arrayToList(a,n);
	display(root);
	return 0;
}
*/



//
//struct Node{
//	int data;
//	Node *next;
//};
//
//
//
//void push(Node **start,int item){
//	Node *temp = new Node;
//	temp->data = item;
//	temp->next = *start;
//	*start = temp;
//}
//void display(Node *start){
//	while(start!=NULL){
//		cout<<start->data<<" ";
//		start=start->next;
//	}
//}
//void append(Node **root,int item){
//	Node *temp = new Node;
//	
//	Node *ptr = *root;
//	temp->data = item;
//	temp->next = NULL;
//	
//	if(*root==NULL){
//		*root=temp;
//	}
//	while(ptr->next!=NULL){
//		ptr=ptr->next;
//	}
//	ptr->next = temp;
//		
//}


/*
void insert(Node** root,int item){
	Node *temp = new Node;
	temp->data = item;
	temp->next = *root;
	*root = temp;
}

Node *arrayToList(int a[],int n){
	Node *root = NULL;
	for(int i=0;i<n;i++){
		insert(&root,a[i]);
	}
	return root;
}

void display(Node *root){
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->next;
	}
}
void append(Node** root,int item){
	Node *temp = new Node;
	Node *ptr = *root;
	
	temp->data = item;
	temp->next = NULL;
	
	if(root==NULL){
		*root=temp;
	}
	
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	
	ptr->next=temp;	
}
void insertafter(Node *root,int item){
//	Node *ptr = *root;
	Node *temp = new Node();
	
	
	if(root==NULL){
		cout<<"Not possible";
	}
	
	temp->data = item;
	temp->next = root->next;
	root->next = temp;
}

int main(){
	int a[]={2,3,4,5,6,7};
	int n = sizeof(a)/sizeof(a[0]);
	
	Node *head =arrayToList(a,n);
	
	append(&head,19);
	insertafter(head->next,87);
	display(head);
}
*/


int hcf(int a,int b){
	if(a==0)
		return b;
	
	return hcf(a%b,b);				
}


int main(){
	int a,b;
	cin>>a>>b;
	cout<<hcf(a,b);
}


















