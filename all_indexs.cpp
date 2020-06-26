#include<bits/stdc++.h>
using namespace std ;

int last(int *arr,int n,int x,int *output){
    if(n<0){
        return 0 ;
    }
    int all = last(arr,n-1,x,output) ;
    if(arr[n]==x){
        output[all] = n ;
        return all+1 ;
    }
    return all ;
}

int main(){
    int numb[6] = {4,8,6,1,8,8} ;
    int out[6] ;
     ;

    for(int i=0;i<last(numb,6,8,out);i++){
        cout<<out[i]<<endl ;
    }
}   