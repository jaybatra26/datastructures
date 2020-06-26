#include<bits/stdc++.h>
using namespace std ;

void print_(int n){
    if(n==1){
    cout<<n<<endl ;
    return ;
    } 
    print_(n-1)    ;   
    cout<<n<<endl ;
    return ;     
      
    } 

int main(){
    print_(10) ;

}


