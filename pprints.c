#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==0 || i==0 || j==n-1 && i==(n-1)/2 || i==(n-1)/2 && j==(n-1)/2)
            {
                printf("* ");
            }
            else
            {
                printf("");
            }
            
            
        }
        printf("\n");
        
    }
    
    return 0;
}