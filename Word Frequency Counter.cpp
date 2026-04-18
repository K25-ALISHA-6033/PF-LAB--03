#include <stdio.h>
#include <string.h>

int main() {
    char words[6][20];
    int seen[6] = {0};
    int i, j, k, count;

    // Input 6 words using scanf()
    printf("Enter 6 words:\n");
    for (i = 0; i < 6; i++) {
        scanf("%19s", words[i]);   // limit to avoid overflow
    }

    // Process each word
    for (i = 0; i < 6; i++) {

        if (seen[i] == 1)
            continue;

        count = 1;

        // Count occurrences using nested loop
        for (j = i + 1; j < 6; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                count++;
                seen[j] = 1;   // mark duplicate as visited
            }
        }

        // Print unique word and its count
        printf("\nWord: %s\n", words[i]);
        printf("Frequency: %d\n", count);

        // Print characters individually
        printf("Characters: ");
        for (k = 0; words[i][k] != '\0'; k++) {
            printf("%c ", words[i][k]);
        }
        printf("\n");
    }

    return 0;
}
