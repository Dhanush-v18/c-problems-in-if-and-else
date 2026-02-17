#include<stdio.h>
int main(){
    int N, price, highestPrice = 0, highPriceDays = 0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&price);
        if(i == 1){
            highestPrice = price;
        }
        if(price > highestPrice){
            highestPrice = price;
        }
        if(price > 100){
            highPriceDays++;
        }
    }
    printf("Highest Price: %d\n", highestPrice);
    printf("High Price Days: %d", highPriceDays);
    return 0;
}
