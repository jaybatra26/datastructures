#include<bits/stdc++.h>
using namespace std ;

void swap(int First,int second,int arr[]){
    int temp = arr[First] ;
    arr[First] = arr[second] ;
    arr[second] = temp  ;
}


void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(j,j+1,arr) ; 
            }
        }

    }
}

int main(){
    int bubble[5] ={7,6,9,40,7} ;
    bubblesort(bubble,5) ;

    for(int i=0;i<5;i++){
        cout<<bubble[i]<<endl ;
    }
}