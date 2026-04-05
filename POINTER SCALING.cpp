#include <stdio.h>

int main(){
    int arr[6], *p = arr, max;

    for(int i=0;i<6;i++) scanf("%d",(p+i));

    max = *p;
    for(int i=1;i<6;i++)
        if(*(p+i) > max) max = *(p+i);

    for(int i=0;i<6;i++)
        *(p+i) = (int)(((float)*(p+i)/max)*100);

    for(int i=0;i<6;i++)
        printf("%d ", *(p+i));

    return 0;
}
