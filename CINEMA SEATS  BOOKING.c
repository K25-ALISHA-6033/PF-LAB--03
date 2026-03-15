
#include <stdio.h>

int main()
{
   int seat[5][6]={
       {1,0,0,1,0,0},
       {0,0,1,1,0,0},
        {1,1,1,0,0,0},
        {0,0,0,0,0,0},
        {1,0,1,0,1,0}
   };
   int available =0;
   int maxBooked =0;
   int rowIndex =0;
   
   for(int i=0 ; i<5 ;i++){
       int BookedInRow =0;
       for(int j=0 ; j<6 ; j++){
           if(seat[i][j]==0){
               available++;
           }
           else{
               BookedInRow++;
           }
       }
       if(BookedInRow>maxBooked){
           maxBooked=BookedInRow;
           rowIndex=i;
       }
   }
   printf("Available seats = %d\n", available);
   printf("Row with maximum booked seats = %d\n", rowIndex + 1);
    return 0;
}
