#include <stdio.h>
void swap(int *a,int *b);
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
    
}
int main (){
    int a=7;
    int b=5;
    swap(&a,&b);
    printf("the value of a is %d\n and value of b is %d\n",a,b);
    return 0;
}
