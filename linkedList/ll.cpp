#include<bits/stdc++.h>
using namespace std;

struct Node{

	int data;
	Node* next;
 
};

Node* delete_(Node* head,int key){
	Node* temp ;
	if(head == key){
		temp = head ;
		head =head->next ;
		free(temp) ;
		
	}
	else {
	Node* prev ;
	Node* current = head ;
	while(current!= key && current != NULL){
		prev = current ;
		current = current->next ;
	}
	temp = current ;
	prev->next = current->next ;
	free(temp);
}
	return head ;
}


int size_1(Node* head){
	Node* current = head ;
	int count =0 ;
	while(current != NULL){
		current = current->next ;
		count ++ ;
	}
	return count ;
}
Node* insert(Node* Inserthead,int data,int pos){
	Node* new_node =new Node() ;
	new_node->data = data ;
	new_node->next = NULL ;

	if(Inserthead ==  NULL) {
		Inserthead= new_node ;	
	}
	else {
		if(pos == 0){
			new_node->next = Inserthead ;
			Inserthead= new_node ;
		}
		else if(pos >= ((size_1(Inserthead)-1))){
			Node* current = Inserthead  ;
			while(current->next != NULL){
				current = current->next ;
			}
			current->next = new_node ;
		
		}
		else{
			int count=0 ;
			Node* current = Inserthead ;
			while(count != pos-1){
			
				current = current->next ;
				count++;
			}
			new_node->next  = current->next ;
			current->next = new_node ;
		}
		}

						
		
			
	return Inserthead ;
}

int main(){
	Node* head = NULL;
	int input;
	cin>>input;
	while(input!=-1){v
		// cout << "input" << input << endl;
		Node* newNode = new Node();
		newNode->data=input;
		newNode->next=NULL;
		if(head==NULL){
			head=newNode;

		}
		else{
			Node* current=head;
		// cout<<"Reched here"<<endl;
		while(current->next!=NULL){
			current=current->next;
		}
		// cout << "lastel	emdnet" << current->data << endl;
		current->next=newNode;
		// current=current->next;
		// cout<<current->data<<endl;
		}
		cin>>input;
		
	}
	// int temp_data ;
	//cin>>temp_data ;
	 
	//head = insert(head,temp_data,2)  ;

	head=delete_(head,7);
	Node* current = head ;
	while(current!=NULL){
		cout<< current->data<< " ";
		current=current->next;
	}
	// cout<<size_1(head)<<endl;

}

