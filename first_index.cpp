#include<bits/stdc++.h>
using namespace std ;

int first(int *arr,int n,int x){
    if(n<0){
        return -1 ;
    }
    if(arr[n]==x){
        return n ;
    }
    else {
        first(arr,n-1,x) ;
    }

    }


int main(){
    int numb[6] = {6,8,7,65,8,9} ;
    cout<<first(numb,6,9)<<endl ;
}

