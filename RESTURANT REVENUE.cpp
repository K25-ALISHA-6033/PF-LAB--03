#include <stdio.h>

float totalRevenue(float b[], int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=b[i];
    return sum;
}

int bestTable(float b[], int n){
    int idx=0;
    for(int i=1;i<n;i++)
        if(b[i]>b[idx]) idx=i;
    return idx;
}

int isProfitable(float total){
    return total > 10000;
}

int main(){
    float bills[5];

    for(int i=0;i<5;i++) scanf("%f",&bills[i]);

    float total = totalRevenue(bills,5);

    printf("Total: %.2f\n", total);
    printf("Best Table: %d\n", bestTable(bills,5)+1);

    if(isProfitable(total))
        printf("Profitable");
    else
        printf("Not Profitable");

    return 0;
}
