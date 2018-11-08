/*
 * 空指针的使用
 */

#include <stdio.h>
//可以对任意类型的变量进行输出
void myprint( void *pv,int type)
{
    if(type == 1)
    {
        printf("*pv = %d\n",*(int *)pv);
    }
    if(type == 2)
    {
        printf("*pv = %c\n",*(char *)pv);
    }
    if(type == 3)
    {
        printf("*pv = %lf\n",*(double *)pv);
    }

}
int main(){

    int i = 20;
    char c = 'C';
    double d = 3.14;
#if 0
    printf("i = %d\n",i);
    printf("c = %c\n",c);
    printf("d = %lf\n",d);
#endif
    myprint(&i,1);
    myprint(&c,2);
    myprint(&d,3);
    return 0;
}





