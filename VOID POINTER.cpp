#include <stdio.h>

int main(){
    void *sensor;
    int vib=847;
    float temp=73.6;
    char status='W';

    sensor=&vib;
    printf("%d %p\n", *(int*)sensor, sensor);

    sensor=&temp;
    printf("%.2f %p\n", *(float*)sensor, sensor);

    sensor=&status;
    printf("%c %p\n", *(char*)sensor, sensor);

    if(*(char*)sensor=='W')
        printf("Warning!");

    return 0;
}
