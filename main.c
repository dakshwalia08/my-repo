#include <stdio.h>
int main (){
    int flag=0;
    int n;
    scanf("%d",&n);
    if (n==1||n==0){
        flag=1;
        
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
            }
        }
    }
    if(flag){
        printf("the number is not prime");
    }
    else{
        printf("the number is prime");
    }
    return 0;
}
