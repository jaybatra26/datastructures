#include<bits/stdc++.h>
using namespace std ;

int power(int x,int n){
    if(n==0){
        return 1;
    }
   int power_ = x*power(x,n-1) ;
    return power_ ;
}

int main(){
    cout<<power(4,3)<<endl ;
}