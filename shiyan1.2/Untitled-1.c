#include<stdio.h>
int main()
{ int y=-1;
double dol=-1,t;
printf("enter dollor");
scanf("%lf",&dol);
if(dol<0)
{printf("请输入正确的钱数");return 0;}
printf("enter year");
scanf("%d",&y);
if(y<1||y>8||y==4||y==6||y==7)
{printf("请输入正确的年份");return 0;}
switch(y)
{
    case 1:t=0.0063;break;
    case 2:t=0.0066;break;
    case 3:t=0.0069;break;
    case 5:t=0.0075;break;
    case 8:t=0.0084;break;
}
dol=dol*t*12*y+dol;
printf("%lf",dol);
return 0;
}
