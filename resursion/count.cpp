#include<bits/stdc++.h>
using namespace std ;

int count(int n){
    if(n==0){
        return 0 ;
    }
    n=n/10 ;
    return 1+count(n);
}

int main(){
    cout<<count(2546)<<endl ;
}
