#include<stdio.h>
int main(){
    int N,voltage,minimum Voltage = 0,low Voltage Events = 0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&voltage);
        if(i==1){
            minimum Voltage = voltage;
        }
        if(voltage < minimum Voltage){
            minimum  Voltage = voltage;
        }
        if(voltage < 210){
            lowVoltage Events++;
        }
    }
    printf("Minimum Voltage: %d\n",minimum Voltage);
    printf("Low Voltage Events: %d",low Voltage Events);
    return 0;
}
