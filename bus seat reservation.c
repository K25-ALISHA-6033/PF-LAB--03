#include <stdio.h>

int main() {
    int totalSeats = 40;
    int bookedSeats = 0;
    int choice = 1; 

    printf("=== Bus Seat Reservation System ===\n");

    while (bookedSeats < totalSeats && choice != 0) {

        printf("\nPress 1 to book a seat (0 to stop): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (bookedSeats < totalSeats) {
                bookedSeats++;
                printf("Seat booked successfully!\n");
                printf("Remaining seats: %d\n", totalSeats - bookedSeats);
            }
        }
        else if (choice == 0) {
            printf("Reservation stopped by operator.\n");
        }
        else {
            printf("Invalid input! Please enter 1 or 0.\n");
        }
    }

    if (bookedSeats == totalSeats) {
        printf("\nAll 40 seats are fully booked!\n");
    }

    printf("\nTotal seats booked: %d\n", bookedSeats);
    printf("Seats remaining: %d\n", totalSeats - bookedSeats);

    return 0;
}
