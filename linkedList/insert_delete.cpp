#include<bits/stdc++.h>
using namespace std ;



struct node(){
    int data ;
    node* next ;
} ;


Node* insert(node* inshead,int data,int pos) {
    node* new_data = new node() ;
    new_data->data = data ;
    new_data->next = NULL ;
        if(pos==0){
        node* temp = inshead ;
        inshead = new_data ;
        inshead->next = temp ;
        }
        else {
            int count = 0 ;
            node*current=inshead ;
            while(current!= pos-1){
            current->current->next ;
            }
            if(current->next == NULL){


        }
    }
    }


}
int main(){
    int input ;
    cin>>input ;
    node* head =NULL ;
    node* newnode = new node() ;
    newnode->data = input ;
    newnode->next =NULL ;
    if(head == NULL){
        head = newnode ;
    }
    else {
    node* current = head ;
    while(current->next != NULL){
        current = current->next ;
    }
    current = newnode ;
    }

    


}