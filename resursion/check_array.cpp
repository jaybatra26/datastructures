#include<bits/stdc++.h>
using namespace std ;

bool checknum(int *arr,int n, int x){
    if(n<0){
        return false ;
    }
    if(arr[n] == x || checknum(arr,n-1,x)){
        return true ;
    }
}

int main(){
    int n ;
    int elements[5] ={5,8,6,9,7} ;
    cout<<checknum(elements,5,10)<<endl ;

}