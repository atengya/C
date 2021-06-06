#include<stdio.h>
int main() 
{
int a,b,c;
printf("请输入三个数字,每个数字以回车键结束\n");
scanf("%d%d%d",&a,&b,&c);
if(b<=c&&b<=a)
{printf("min=%d\n",b);return 0;}
if(c<=b&&c<=a)
{printf("min=%d\n",c);return 0;}
if((a<=b)&&(a<=c))
{printf("min=%d\n",a);return 0;}
}