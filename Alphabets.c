#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n;
    int c ;
    char ch=97;
    printf("Enter a Number :\n\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {

            printf("%c  ",ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}
