#include<bits/stdc++.h>
using namespace std ;

int printnumbers(int arr[],int size){
    if(size==1){
        return arr[size-1] ;
    }
    
     
   int sum = printnumbers(arr,size-1) ;
    sum += arr[size-1] ;
    return sum ;
}

int main(){
    int numb[7] ={7,2,6,8,2,3,1} ;
    cout<<printnumbers(numb,7)<<endl ;

}



