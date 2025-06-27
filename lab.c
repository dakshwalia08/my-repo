
#include <stdio.h>
int sum(int );
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}
int main (){

printf("the value of sum of integer at %d ",sum(5));
return 0;
    
}
