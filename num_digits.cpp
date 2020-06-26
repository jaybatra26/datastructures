#include<bits/stdc++.h>
using namespace std ;

int num_digits(int n){
    if(n/10==0){
        return 1;
    }
    return num_digits(n/10)+1 ;
}
int main(){
    cout<<num_digits(6547)<<endl ;

}