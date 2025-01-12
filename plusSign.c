#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            int a = n / 2 + 1;
            if (i == a || j == a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}
