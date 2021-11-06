#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,r=0,dsum=0,temp=0;
    printf("\n enter a positive number");
    scanf("%d",&no);
    temp=no;
    while(temp>0)
    {
        r=temp%10;
        dsum=dsum+r;
        temp=temp/10;
    }
    printf("\n digits in given number are = %d",dsum);
    getch();
    return 0;
}
