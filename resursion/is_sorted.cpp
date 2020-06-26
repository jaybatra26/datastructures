#include<bits/stdc++.h>
using namespace std ;

bool is_sorted(int a[],int n){
    if(n== 0 || n ==1){
        return true ;
    } 
    if(a[0]>a[1]){ 
        return false ;
    }   
    bool issmallersorted = is_sorted(a+1,n-1) ;
    
    if(issmallersorted){
        return issmallersorted ;
    }
}
 int main(){
    int n ;
    cin>>n ;
    int sort[n] ;
    for(int i= 0 ; i<n ; i++){
        cin>>sort[i] ;
    }
    cout<<is_sorted(sort[n],n)<<endl ;
    return 0 ;
}
