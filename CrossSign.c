#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("Enter a Number :\n");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {

            int b = n + j;
            if (i == j || i + j == b)
            {
                printf("* ");

                /* code */
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
