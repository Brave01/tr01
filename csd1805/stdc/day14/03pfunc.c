/*
 * 函数指针
 *   编写  剩下的三个函数
 *        int sub(int a,int b);
 *        int mul(int a,int b);
 *        int div(int a,int b);
 *
 *        将函数地址赋值给下面的函数指针变量,
 *        通过函数指针变量退函数进行调用
 *
    pfunc fp1,fp2,fp3,fp4; //用fptr 类型声明多个函数指针变量
 */
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);


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

int main(){

    int (*fptr)(int,int); //声明了一个函数指针变量
                      //指针变量名 fptr,该函数指针
                      //返回一个int  传入 两个int的类型
 

    //printf("add 函数的地址:%p\n",&add); //??
    printf("add 函数的地址:%p\n",add); //??

    //printf("main 函数的地址:%p\n",&main); //??
    printf("main 函数的地址:%p\n",main); //??

    //用函数指针保存 add 函数的地址

    fptr = add; //将函数add 的地址 赋值给函数指针变量
    printf("*fptr = %p\n",*fptr);

    //通过 函数指针变量 调用函数
    printf("函数add调用返回 = %d\n",add(4,6));
    //printf("函数调用返回 = %d\n",(*fptr)(4,6)); //间接调用add
    printf("函数fptr调用返回 = %d\n",fptr(4,6)); //间接调用add

    //声明函数指针 类型
    //int * pa;  //声明了一个int * 变量pa
    //typedef int * pa; //声明了一个 int * 类型的别名 pa
    //pa p1,p2,p3; //声明了3个整形指针变量
    //
    
    //int (*pfunc)(int,int); //声明了一个函数指针变量
    typedef   int (*pfunc)(int,int);  //声明一个函数指针的类型pfunc
    pfunc fp1,fp2,fp3,fp4; //用fptr 类型声明多个函数指针变量
    fp1 = add;
    fp2 = sub;
    fp3 = mul;
    fp4 = div;

    printf("函数fp1调用返回 = %d\n",fp1(4,6)); //间接调用add
    printf("函数fp2调用返回 = %d\n",fp2(4,6)); //间接调用add
    printf("函数fp3调用返回 = %d\n",fp3(4,6)); //间接调用add
    printf("函数fp4调用返回 = %d\n",fp4(4,6)); //间接调用add


/*
 * 函数指针
 *   编写  剩下的三个函数
 *        int sub(int a,int b); // 实现 a - b
 *        int mul(int a,int b); // 实现 a * b
 *        int div(int a,int b); // 实现 a / b
 *
 *        将函数地址赋值给下面的函数指针变量,
 *        通过函数指针变量对函数进行调用
 *
    pfunc fp1,fp2,fp3,fp4; //用fptr 类型声明多个函数指针变量
 */


    return 0;
}






