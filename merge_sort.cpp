#include<bits/stdc++.h>
using namespace std ;



void merge(int* arr,int s,int e){
  int mid =(s+e)/2 ;
  int size = e-s+1 ;
  int* out = new int[size] ; 
  int i = s ;
  int j = mid+1 ;
  int k=0 ;
  while(i <= mid && j <= e){
      if(arr[i]<arr[j]){
        out[k] = arr[i] ;
        i++ ;
        k++ ;
      }
      else{
        out[k]=arr[j] ;
        j++ ;
        k++ ;
      }
  }
  while(i<=mid){
      out[k]=arr[i] ;
      k++ ;
      i++ ;
  }
  while(j<=e){
      out[k]=arr[j] ;
      k++ ;
      j++ ;
  }
    int m=0 ;
    for(int i=s;i<e;i++){
        arr[i]=out[m] ;
        m++ ;
    }
    delete [] out ;

   }

void mergesort(int* arr,int s,int e){
    if(e <= s){
        return ;
    }
    int mid = (s+e)/2 ;
    mergesort(arr,s,mid) ;
    mergesort(arr,mid+1,e) ;
    merge(arr,s,e) ;
}




int main(){
    int numbers[6]={4,9,3,7,5,6} ;
    mergesort(numbers,0,5) ;
    for(int i=0;i<6;i++){
        cout<<numbers[i]<<endl;
    }
}