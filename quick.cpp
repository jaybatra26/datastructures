#include<bits/stdc++.h>
using namespace std ;



void swap(int arr[] ,int a,int b){
    int temp= arr[a] ;
    arr[a]=arr[b]    ;
    arr[b]=temp     ;

}


void partition(int arr,int s,int e){
    int i,j ;
    int count =0 ;
    for(i=s;i<e;i++){
        if(arr[i]>arr[i+count]){
            swap(arr,i,i+count) ;
        }
        count++ ;
    }
}

// void quick(int arr[],s,e){
//     if(s>=e){
//         return ;
//     }
//     partition(arr,s,e) ;
//     quick()


// }






int main(){
    int numbers[7]={3,7,9,4,6,3,2} ;
    partition(numbers,0,6) ;

}