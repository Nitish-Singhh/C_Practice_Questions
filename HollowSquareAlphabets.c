#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,num;
    char ch ='a';
    printf("Enter a Number :");
    scanf("%d",&num);
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            if (i==0||i==num-1||j==0||j==num-1)
            {
                printf("%c ",ch);

                
            }
            else{
                printf("  ");
            }
            
            ch++;
             if (ch > 'z') { 
                ch = 'A';
            }
        }
        printf("\n");
    }
    return 0;
}
