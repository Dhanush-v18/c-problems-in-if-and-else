#include<stdio.h>
int main(){
    int initialCash, N, withdrawal, remainingCash, riskCount = 0;
    scanf("%d",&initialCash);
    scanf("%d",&N);
    remainingCash = initialCash;
    for(int i=1;i<=N;i++){
        scanf("%d",&withdrawal);
        remainingCash -= withdrawal;
        if(remainingCash < 5000){
            riskCount++;
        }
    }
    printf("Remaining Cash: %d\n", remainingCash);
    printf("Risk Count: %d", riskCount);
    return 0;
}
