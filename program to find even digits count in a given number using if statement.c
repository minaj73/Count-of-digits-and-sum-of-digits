#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0,even_count=0,temp=0,dig=0;
    printf("\n enter a positive number");
    scanf("%d",&no);

    temp=no;
    while(temp>0)
    {
        dig=temp%10;
        if(dig%2==0)
        {
            even_count++;
        }
        temp=temp/10;
    }
    printf("\n  %d",even_count);

    getch();
    return 0;
}
