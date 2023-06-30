#include <stdio.h>
int main (){
    int i,j, n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for ( i=1,j=n; i <=n && j>=1; i++,j--)
    {
        sum=sum+i; // sum+=i
         printf("%d\n",j);
    }
    printf("Sum is :%d \n",sum);

    // for ( i=n; i>=1; i--)
    // {
    //     printf("%d\n",i);

    // }
}