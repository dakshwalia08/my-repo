
#include <stdio.h>
int main (){
    float cost[3];
    printf("the cost of 1 is ");
    scanf("%f",&cost[0]);
    printf("the cost of 2 is ");
    scanf("%f",&cost[1]);
    printf("the cost of 3 is ");
    scanf("%f",&cost[2]);
    printf("the final cost of 1 is %f\n",cost[0]+(cost[0]*0.18));
    printf("the final cost of 2 is %f\n",cost[1]+(cost[1]*0.18));
    printf("the final cost of 3 is %f\n",cost[2]+(cost[2]*0.18));
    return 0;
}
