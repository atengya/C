#include<stdio.h>
int main()
{
    int score=-2;
    printf("enter score,please\n");
    scanf("%d",&score);
    if (score==-2)
    {printf("请输入十进制数");return 0;}
    (score>100||score<0)?(score=-1):(score=score/10);
    switch(score)
    {
        case 10:printf("优");break;
        case 9:printf("优");break;
        case 8:printf("良");break;
        case 7:printf("中");break;
        case 6:printf("差");break;
        case -1:printf("请输入大于等于0小于等于100的值");break;
        default:printf("劣");break;
    }
    return 0;
}
