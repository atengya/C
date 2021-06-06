#include<stdio.h>
int main()
{
    int p=1,day=10;
    for(;day>1;)
    {
        p=2*(p+1);
        day--;
        printf("peach:%d\n day:%d\n",p,day);
    }
    return 0;
}