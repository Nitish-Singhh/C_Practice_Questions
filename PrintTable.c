#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a Number :");
    scanf("%d :", &n);
    printf("Table of Given number :\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i,   n * i);
        if (i==5)
        {
            /* code */
            printf("hii");
            continue;
        }
        
    }

    return 0;
}
