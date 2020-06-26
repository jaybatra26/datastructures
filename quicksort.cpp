#include<bits/stdc++.h>
using namespace std ;

int swap(int *a,int *b){
    int temp = *a ;
    *a= *b ;
    *b = temp ;
}

int partition(int arr[],int low, int high){
    int pivot = arr[high] ;
    int i= low  ;
    for(int j=low;j<= high-1;j++){
        if(arr[j]<=pivot)
        {
        i++ ;
        swap(&arr[i],&arr[j]) ;
        }
    }   
    swap(&arr[i+1],&arr[high]) ;
        return(i+1) ;           
    
}

void quicksort(int arr[],int low,int high){
    if(low<high){   
        int pi = partition(arr,low,high);

    quicksort(arr,low,pi-1) ;
    quicksort(arr,pi+1,high) ;
    }
}

 
// int parray(int arr[],int size){

//     for(int i;i<size;i++){
//         cout<<arr[i]<<endl ;
//     }
//}
int main(){
    int size = 6 ;
    int quick[] = {7,6,5,9,87,24} ;
    quicksort(quick,0,5) ;
    //parray(quick,5) ;
    for(int i;i<size;i++){
        cout<<quick[i]<<endl ;
    }
    
}