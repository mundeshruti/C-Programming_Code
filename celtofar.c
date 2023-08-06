/* WAP TO CONVERT CELSIUS TO FAHRENHEIT
*/
#include<stdio.h>

float convertTemp(float celsius);

int main()
{
    float far=convertTemp(0);
    printf("far :%f",far);
    return 0;
}
float convertTemp(float celsius)
{
    int far=celsius*(9/5)+32;
    return far;
}