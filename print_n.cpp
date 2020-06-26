#include<bits/stdc++.h>
using namespace std ;

void printnum(int n){
    if(n==1){
        cout<<n<<endl ;
        return ;
    }
    printnum(n-1) ;
    cout<<n<<endl ;
}

int main(){
    printnum(6) ;
}
