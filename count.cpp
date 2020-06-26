#include<bits/stdc++.h>
using namespace std ;

int count(int n){
    if(n/10==0){
        if(n==0){
            return 1 ;
        }
       else {
           return 0 ;
       }
    }
       
    int total = count(n/10) ;
    if((n%10)==0){
     total++ ;
    }
    return total ;
}



int main(){
    int n ;
    cin>>n ;
    int ans = 0 ;
    // int *p = &ans ;
    cout<<count(n)<<endl ;

}






