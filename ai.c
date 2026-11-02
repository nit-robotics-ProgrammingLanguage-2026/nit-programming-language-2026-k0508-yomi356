#include <stdio.h>

int main(void)
{
    int n;
    int found = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
        return 0;
    }

    if (n == 0) {
        printf("No\n");
        return 0;
    }

    if (n % 3 == 0) {
        printf("Up");
        found++;
    }

    if (n % 5 == 0) {
        printf("Go");
        found++;
    }

    if (n % 7 == 0) {
        printf("!!");
        found++;
    }

    if (found == 0) {
        printf("No");
    }

    printf("\n");

    return 0;
}