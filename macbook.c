
#include <stdio.h>
int main (){
    int i=72;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    
printf("the adress is %u\n",&i);
printf("the adress is %u\n",&ptr1);
printf("the adress is %u\n",&ptr2);
    
    printf("the value of i is %d\n",i);
      printf("the value of i is %d\n",*ptr1);
        printf("the value of i is %d\n",**ptr2);
        return 0;
}
