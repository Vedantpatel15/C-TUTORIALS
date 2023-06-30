#include<stdio.h>
void printNameste();
void printbonjour();
int main(){
    char ch;
    printf("enter f for french & i for indian: ");
    scanf("%c",&ch);
    if(ch=='i'){
printNameste();
    }
    else
    {
printbonjour();
    }


}

void printNameste()
{
printf("NAMASTE\n");
}

void printbonjour()
{
printf("BONJOUR");
}
