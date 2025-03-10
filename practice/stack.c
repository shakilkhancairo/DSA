#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push( int x){
    if( top<CAPACITY - 1){
    top = top + 1;
    stack[top] = x;
    }
}

void pop(){
    return -1;
}
int peek(){
    return -1;
}
int main(){
    push(30);

    return 0;
}