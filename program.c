#include <stdio.h>
int main (){
    int product=1;
    int n=4;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    printf("the factorial of number is %d",product);
    return 0;
}
