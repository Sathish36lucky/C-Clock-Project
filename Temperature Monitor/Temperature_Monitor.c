#include <stdio.h>
int main(){
    float currentTemp;
    float minTemp,maxTemp;
    printf("Enter max Temperature(in celsius):");
    scanf("%f",&maxTemp);
    printf("Enter min Temperature(in celsius):");
    scanf("%f",&minTemp);
    printf("Enter current Temperature(in celsius):");
    scanf("%f",&currentTemp);

     if(currentTemp<minTemp){
        printf("Temperature is too low\n. Turn on the Heater\n");
     } else if(currentTemp>maxTemp){
        printf("Temperature is too high\n. Turn on the Cooler\n");
     }else{
        printf("Temperature is Optimal\n.No action needed");
     }
    return 0;
}
