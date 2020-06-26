#include<bits/stdc++.h>
using namespace std ;

int fibb(int n){
    if(n == 0){
        return 0 ;
    }
    if(n == 1){
        return 1 ;
    }
    int x = fibb(n-1) ;
    int y = fibb(n-2) ;

    return x+y ;
    
}


int main(){
    int n = 10 ;
    cout<<fibb(n-1)<<endl ;

    } 