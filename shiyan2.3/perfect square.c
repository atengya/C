//一个整数,他加上100后是一个完全平方数,再加上168后又是一个完全平方数,请问该数是多少.
#include<stdio.h>
#include<math.h>
int main()
{   int i;
    for(i=1;i<=100000;i++)
    {
        if(pow(i+100,0.5)==(int)(pow(i+100,0.5))&&pow(i+268,0.5)==(int)(pow(i+268,0.5)))
        printf("%d\n",i);
    }
    return 0;
}