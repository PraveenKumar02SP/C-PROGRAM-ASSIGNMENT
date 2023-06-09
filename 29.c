#include <stdio.h>

int main() {
    int temperatures[2][7];  // 2 cities and 7 days
    int i, j;

    // Input temperatures for the two cities
    for (i = 0; i < 2; i++) {
        printf("Enter temperatures for city %d for the week:\n", i+1);
        for (j = 0; j < 7; j++) {
            printf("Day %d: ", j+1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    // Display temperatures for the two cities
    printf("\nTemperatures for the week:\n");
    for (i = 0; i < 2; i++) {
        printf("City %d: ", i+1);
        for (j = 0; j < 7; j++) {
            printf("%d ", temperatures[i][j]);
        }
        printf("\n");
    }

    return 0;
}
output:
Enter temperatures for city 1 for the week:
Day 1: 20
Day 2: 23
Day 3: 22
Day 4: 24
Day 5: 21
Day 6: 19
Day 7: 18
Enter temperatures for city 2 for the week:
Day 1: 25
Day 2: 26
Day 3: 24
Day 4: 27
Day 5: 23
Day 6: 22
Day 7: 21

Temperatures for the week:
City 1: 20 23 22 24 21 19 18 
City 2: 25 26 24 27 23 22 21