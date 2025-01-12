#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, j;
    char num = 65;

    printf("Enter a number :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (i==0||j==0||i==n-1||j==n-1)
            {
                printf("%c ", num);

                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
