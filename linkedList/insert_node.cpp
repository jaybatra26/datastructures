#include<bits/stdc++.h>
using namespace std ;
void push(node** head_ref,int new_data){
    node* new_node= new node() ;
    new_node->data =new_data ;
    now_node->next = (*head_ref) ;
    (*head_ref) = new_node ;

    

}