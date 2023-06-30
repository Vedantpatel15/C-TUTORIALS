#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", & age);

    if(age >18)
{
    printf("adult\n");
}
else
{
    printf("not adult");
}
printf("Thank You");

return 0;

}