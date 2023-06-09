#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Find sum of all odd numbers from 1 to n using a for loop
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("The sum of all odd numbers from 1 to %d is %d.\n", n, sum);

    return 0;
}
output:
Enter a positive integer: 5
The sum of all odd numbers from 1 to 5 is 9.