#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data ;
    node* next ;
} ;

int main() {
    node* head = NULL ;
    int input ;
    cin>>input ;

    while(input!=-1 ){
        node* newnode = new node() ;
        newnode->data = input ;
        newnode->next = NULL ;
        if(head= NULL){
            head= newnode ;
        }
        else{
        node* current = head ;
        while(current->next != NULL){
            current = current->next ;

        }
        
        current->next= newnode ;
    }




}

