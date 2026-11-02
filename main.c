#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
    } else if (n == 0) {
        printf("No\n");
    } else {
        int printed = 0;

        if (n % 3 == 0) {
            printf("Up");
            printed = 1;
        }

        if (n % 5 == 0) {
            printf("Go");
            printed = 1;
        }

        if (n % 7 == 0) {
            printf("!!");
            printed = 1;
        }

        if (printed == 0) {
            printf("No");
        }

        printf("\n");
    }

    return 0;
}