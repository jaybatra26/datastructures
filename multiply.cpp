#include<bits/stdc++.h>
using namespace std ;

int multiply(int m ,int n ){
    if(n==1){
        return m ;
    }
    int total = multiply(m,n-1)+ m ;
    return total ;
}


int main(){
    int m,n ;
    cin>>m>>n ;

    cout<<multiply(m,n) ;
     
}

