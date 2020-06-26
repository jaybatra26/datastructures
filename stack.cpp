#include<bits/stdc++.h>
using namespace std ;


class queue(){
    private :
    int myqueue[max_size],front,rear ;

    public :
    queue(){
        fornt=rear= -1 ;
    }
}

void enqueue(int x){
    if(is_full){
        cout<<"stackoverflow"<<endl ;
    }
    else if {
        if(is_empty){
            front=rear=0 ;
        }
    }
    else{
        rear++ ;
    }
    arr[rear] = x ;
}


int dequeue(){
    int x = 0 ;

    if(is_empty){
        cout<<"queue is empty" ;
        return ;
    }
    else if(front=rear=0){
        front=rear=-1 ;
    }
    else{
        x = arr(front)
        front ++ ;
    }
    return x ;
    }
    

bool is_full() {
    if(top== n-1){
        return true ;
    else ;
        return false ;
    }
}

bool is_empty(){
    if(front==-1 &&r ear== -1){
        return true ;
    else {
        return false ;
    }
    }
}

int main(){
    queue myq ;
    myq.enqueue
}