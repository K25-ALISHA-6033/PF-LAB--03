#include <stdio.h>

int main()
{
    int temperature[7][3] = {
        {30, 35, 28},
        {31, 36, 29},
        {29, 34, 27},
        {32, 37, 30},
        {33, 38, 31},
        {34, 39, 32},
        {35, 40, 33}
    };
    int i, j;
    int highest = temperature[0][0];
    float avg, sum;
    for(i = 0; i < 7; i++){
        for(j = 0; j < 3; j++){
            if(temperature[i][j] > highest){
                highest = temperature[i][j];
            }
        }
    }
    printf("Highest temperature in the week = %d\n", highest);
    for(i = 0; i < 7; i++){
        sum = 0;
        for(j = 0; j < 3; j++){
            sum = sum + temperature[i][j];
        }
        avg = sum / 3;
        printf("Average temperature of day %d = %.2f\n", i + 1, avg);
    }
    return 0;
}