#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0,dsum=0,temp=0;
    printf("\n enter positive number");
    scanf("%d",&no);
    for(dsum=0,temp=no;temp>0;dsum+=(temp%10),temp/=10);
    printf("\n sum of digits in %d = %d",no,dsum);
    getch();
    return 0;
}
