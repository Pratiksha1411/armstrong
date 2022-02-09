#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,d1,d2,sum,ori;
    printf("enter any 3 digit number");
    scanf("%d", &num);
    ori = num;
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    sum = d1*d1*d1+d2*d2*d2+num*num*num;
    if(sum==ori)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
    getch();
}
