#include <stdio.h>

float applyDiscount(float price, int tier) {
    if(tier == 1) return price * 0.95;
    else if(tier == 2) return price * 0.90;
    else if(tier == 3) return price * 0.80;
    else if(tier == 4) return price * 0.70;
    return price;
}

void printInvoice(float original, float discounted) {
    float delivery = 0;

    if(discounted < 2000)
        delivery = 150;

    printf("Original: %.2f\n", original);
    printf("Discount: %.2f\n", original - discounted);
    printf("Delivery: %.2f\n", delivery);
    printf("Total: %.2f\n", discounted + delivery);
}

int main() {
    float price, disc;
    int tier;

    scanf("%f %d", &price, &tier);

    disc = applyDiscount(price, tier);
    printInvoice(price, disc);

    return 0;
}
