#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n;
    // int Alpha =65;
    char ch='A';
    printf("Enter a Number :\n");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){

             
            printf("%c ",ch);
            ch++;
        }
        printf("\n ");
    }
    return 0;
}
