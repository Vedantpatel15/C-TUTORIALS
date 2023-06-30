#include<stdio.h>
int sum(int a,int b);
void printTable(int);
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
   printTable(n);//argument/actual parameter
    return 0; 

}
void printTable(int n){//parameter/formalparameter
    int i;
    for ( i = 1; i <=10 ; i++)
    {
        printf("%d\n",i*n); 
    } 
    
}
