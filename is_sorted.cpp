#include<bits/stdc++.h>
using namespace std ;


bool is_sorted(int arr[],int size){
    if(size==0||size==1){
        return true ;
    }
    if(arr[1]< arr[0]){
        return false  ;
    }
    bool is_smallsorted = is_sorted(arr+1,size-1) ;
    return is_smallsorted ;

}

int main(){
    int numb[10] ={1,2,5,8,12,15,18,24,28,29} ;
    cout<<is_sorted(numb,10)<<endl ;
}
