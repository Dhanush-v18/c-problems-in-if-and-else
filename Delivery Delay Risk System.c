#include<stdio.h>
int main()
{
    int N, delay;
    int totalDelay = 0;
    int delayedDeliveries = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&delay);
        totalDelay = totalDelay + delay;
        if(delay > 30)
        {
            delayedDeliveries = delayedDeliveries+1;
        }
    }
    printf("Total Delay: %d\n",totalDelay);
    printf("Delayed Deliveries:%d",delayedDeliveries);
    return 0;
}
