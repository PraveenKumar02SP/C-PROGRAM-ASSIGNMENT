#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Total occurrence of '%c' = %d\n", ch, count);

    return 0;
}
output:
Enter a string: buygebdhxufxiwg
Enter a character to search: g
Total occurrence of 'g' = 2
Enter a string: buygebdhxufxiwg
Enter a character to search: g
Total occurrence of 'g' = 2