//factorial
#include<stdio.h>
int main()
{   int i=0,n=1,sum=1;
    while(i==0||n>=20||n<1)// 当n不符合要求时重新取值
    {   
        printf("Please enter a integer\n");
        i=(scanf("%d",&n));
        while(getchar()!='\n')
        {
            ;
        }
    }
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%d\n",sum);
    return 0;
}