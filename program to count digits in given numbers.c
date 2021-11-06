#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,dcount=0;
    printf("\n enter a positive number");
    scanf("%d",&no);
    while(no>0)
    {
        no=no/10;
        dcount++;
    }
    printf("\n digits in given number are = %d",dcount);
    getch();
    return 0;
}
