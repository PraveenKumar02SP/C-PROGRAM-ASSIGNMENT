#include <stdio.h>
#include <string.h>

typedef struct stu1{
    char name1[6];
    char name2[6];
    double marks;
} STU1;

int main() {
    STU1 s1 = {"rohit", "kumar", 87.43};
    char *p;
    p = memchr(s1.name1, 'u', sizeof(s1.name1));
    if (p != NULL) {
        printf("Found 'u' at index %ld\n", p - s1.name1);
    } else {
        printf("Not found\n");
    }
    return 0;
}
output:
Found 'u' at index 3