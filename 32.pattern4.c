#include<stdio.h>
void main(){
    int n,i,j;

    printf("Enter how many rows you want\n");
    scanf("%d",&n);

    for (i = 1; i <=n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}