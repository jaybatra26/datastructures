#include<bits/stdc++.h>
using namespace std ;

int sum_2(int *arr,int n){
    if(n==0){
        return arr[0] ;
    }
    int sum_1 = sum_2(arr,n-1)+arr[n] ;
    return sum_1 ;
}

int main(){
    int number[6] = {8,6,54,7,24,32} ;
    cout<<sum_2(number,5) ;

}
