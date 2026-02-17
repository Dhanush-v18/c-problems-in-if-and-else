#include<stdio.h>
int main(){
    int N,revenue,totalRevenue=0,targetDays=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&revenue);
        totalRevenue += revenue;
        if(revenue>50000){
            targetDays++;
        }
    }
    printf("Total Revenue:%d\n",totalRevenue);
    printf("Target Days:%d", targetDays);
    return 0;
}
