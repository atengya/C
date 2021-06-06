//水仙花
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            for(k=0;k<10;k++)
            {
                if((i*100+j*10+k)==(i*i*i+j*j*j+k*k*k))
                printf("%d\n",i*100+j*10+k);
            }
        }
    }
    return 0;
}