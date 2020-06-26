#include<bits/stdc++.h>
using namespace std ;


 void first(int* arr,int n,int x,int* output, int *l){
    if(n==0){
        return ;
    }
    first(arr,n-1,x,output,l) ;
    if(arr[n-1]==x){
        output[*l] = n-1  ;
        (*l)++ ;
    }
       
}


 


int main(){
    int numb[6] = {6,9,6,9,65,1} ;
    int output[6] ;
    
    int l =0 ;
    // int *ptr = &l;
    // cout <<*[ptr]
    first(numb,6,9,output,&l);
    for(int i =0 ;i<l;i++){
        cout<<output[i]<<endl ;
    }

}

