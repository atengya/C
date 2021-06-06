//百钱买鸡
#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<19;x++)
    {
        for(y=1;y<=31;y++)
        {   
            for(z=1;z<99;z++)
            {
                if(x+y+z==100&&5*x+3*y+z/3==100&&z%3==0)
                printf("%d %d %d \n",x,y,z);
            }
        }
    }
    return 0;
}