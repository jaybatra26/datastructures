#include<bits/stdc++.h>
using namespace std ;

struct Node  {
    int data ;
    Node* next ;
} ;

int main(){
    Node* head=  NULL ;
    int input ;
    cin>>input ;
    while(input!=-1){
         Node* newnode = new Node() ;
        newnode->data = input ;
        newnode->next = NULL ;
        if(head == NULL){
             head = newnode ;
         }
        else {
        Node *current = head ;
        while(current->next!=NULL){
            current = current->next ;
        }   
        current->next = newnode ;

         
        while(current != NULL){
            cout<<current->data<<" " ;
            current= current->next ;
         }
        }
         cout<<endl ;
          }
}
