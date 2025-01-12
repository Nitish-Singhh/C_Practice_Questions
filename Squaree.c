#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    printf("Enter a Number :\n");
    scanf("%d",&a);
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
