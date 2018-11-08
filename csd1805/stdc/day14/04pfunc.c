/*
 * 函数指针的使用
 *     函数指针作为函数的参数
 */
#include <stdio.h>
int  add(int a,int b){
    return a+b;
}

int  sub(int a,int b){
    return a-b;
}

int  mul(int a,int b){
    return a*b;
}

int  div(int a,int b){
    return a/b;
}


typedef int (*pfunc)(int,int); //声明了一个pfunc 的函数指针类型

//传入的第三参数是函数指针类型
int compute(int a,int b,pfunc opr);
int compute(int a,int b,pfunc opr)
{
    return opr(a,b);
}

int main(){
   int a = 20;
   int b = 30;
   int c = 0; 

   c = compute(a,b,add);
   printf("add c = %d\n",c);

   c = compute(a,b,sub);
   printf("sub c = %d\n",c);

   c = compute(a,b,mul);
   printf("mul c = %d\n",c);

   c = compute(a,b,div);
   printf("div c = %d\n",c);

    return 0;
}
