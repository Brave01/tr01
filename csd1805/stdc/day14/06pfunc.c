/*
 * 函数指针数组
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

//pfunc  pf_arry[4];
pfunc  pf_arry[127];
void initArry()
{
    //pf_arry[0] = add
    pf_arry['+'] = add;
    pf_arry['-'] = sub;
    pf_arry['*'] = mul;
    pf_arry['/'] = div;

}
int compute(int a,int b,char opr)
{
    pfunc pf1 = pf_arry[opr];
    return pf1(a,b);
}
int main(){
    initArry();
    //在main函数中 添加代码 可以实现 输入一个表达式
    //输出该表达式的结果
    printf("运算的结果=%d\n",compute(10,5,'+'));
    printf("运算的结果=%d\n",compute(10,5,'-'));

}




