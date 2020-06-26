#include<bits/stdc++.h>
using namespace std ;


int sum(int* arr,int n){
    if(n == 0){
        return arr[0]  ;     
    }
    int sum_ = arr[n] ;
    sum_ = sum_ + sum(arr,n-1) ;
    return sum_ ;
}
int main(){
    int elements[5]={6,5,8,2,3} ;
    cout<<sum(elements,4)<<endl ;
}