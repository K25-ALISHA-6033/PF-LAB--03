#include <stdio.h>

int validatePIN(int stored, int entered) {
    return stored == entered;
}

int main() {
    int stored = 4729, pin;

    for(int i=1;i<=3;i++) {
        scanf("%d",&pin);

        if(validatePIN(stored, pin)) {
            printf("Access granted");
            break;
        } else {
            printf("Wrong PIN. Attempts left: %d\n", 3-i);
        }

        if(i==3)
            printf("Card blocked");
    }
    return 0;
}
