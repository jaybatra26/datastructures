#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data ;
    node *next ;
    node *prev ;
} ;

node * insert(node* head1,int data,int pos){
    node* new_node = new node() ;
    new_node->data = data ;
    new_node->next = NULL ;
    new_node->prev = NULL ;

    if(pos == 0){
        head1 = new_node ;
    }
    else  { 
        node *current = head1 ;
        while(current->next!= NULL){
            
        }
        
    }
    }
}

int main (){
    int input ;
    cin>>input ;
    node* head = NULL ;
    while(input!= -1){
    node *new_node = new node() ;
    new_node->data = input ;
    new_node->next = NULL ;
    new_node->prev = NULL ;

    if(head == NULL){
        head = new_node ;
    }
    else{
        node* current = head ;
        while(current->next != NULL){
            current = current->next ;
        } 
        current->next= new_node ;
        new_node->prev = current ;

    }
    cin>>input ;    
    }
    node * tail ;
    node* current = head ;
    while(current!=NULL){
       if(current->next == NULL){
        tail = current ;
       }
        cout<<current->data<<endl ;
        current= current->next ;
        
    }
    while(tail != NULL){
       
        cout<<tail->data<<endl ;
         tail= tail->prev ;
    }

}
