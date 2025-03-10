#include<stdio.h>

int evenEnd(int n){
    if(n<2){
        return 0;
    }
    if (n % 2 != 0) {
        n--;
    }
    return n+ evenEnd(n -2);
}

int main(){
    int num;
    printf("enter a number:");
    scanf("%d", &num);

    int result = evenEnd(num);

    printf("sum of even number from 2 to %d is : %d\n",num,result);
    return 0;
}