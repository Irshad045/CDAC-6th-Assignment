#include <stdio.h>
int sumd(int num)
{
    int sum=0,rem;
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    return sum;
}
int prod(int num)
{
    int pro=1,rem;
    while(num>0)
    {
        rem=num%10;
        pro*=rem;
        num=num/10;
    }
    return pro;
}
int main()
{
    int n;
    printf("\nEnter a number :");
    scanf("%d",&n);
 
    printf("\nSUM : %d",sumd(n));
    printf("\nPRODUCT : %d",prod(n));
    return 0;
}
