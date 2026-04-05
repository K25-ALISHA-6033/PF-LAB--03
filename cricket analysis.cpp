#include <stdio.h>

int totalRuns(int arr[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) sum += arr[i];
    return sum;
}

int highestScore(int arr[], int n) {
    int max = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

int aboveAverage(int arr[], int n, float avg) {
    int count = 0;
    for(int i=0;i<n;i++)
        if(arr[i] > avg) count++;
    return count;
}

int main() {
    int arr[10];

    for(int i=0;i<10;i++) scanf("%d",&arr[i]);

    int total = totalRuns(arr,10);
    float avg = (float)total/10;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("Highest: %d\n", highestScore(arr,10));
    printf("Above Avg: %d\n", aboveAverage(arr,10,avg));

    return 0;
}
