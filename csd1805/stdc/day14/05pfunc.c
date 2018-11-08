/*
 * 函数指针作为 函数的返回值
 */
#include <stdio.h>
int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){
    return a/b;
}
typedef int (*pfunc)(int a,int b);

pfunc select(char opr);
pfunc select(char opr)
{
    if(opr == '+')
        return add;
    if(opr == '-')
        return sub;
    if(opr == '*')
        return mul;
    if(opr == '/')
        return div;
}

int compute(int a,int b,char opr);
int compute(int a,int b,char opr)
{
    pfunc pf1;
    pf1 = select(opr);

    return pf1(a,b);
}

int main(){

    printf("运算的结果 = %d\n",compute(30,20,'*'));
    printf("运算的结果 = %d\n",compute(30,20,'-'));
    printf("运算的结果 = %d\n",compute(30,20,'+'));
    printf("运算的结果 = %d\n",compute(30,20,'/'));
    return 0;
}




