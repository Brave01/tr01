/*
 * 空指针 的声明 使用
 */
#include <stdio.h>
int main(){

    void *pv = NULL; //空指针
    char c = 'A';
    int i = 0x31323334;
    //          1   2  3  4
    char *pc = NULL;

    pc = &c;
    pc = (char *)&i;  //指针变量赋值 类型要一致

    pv = &c;
    printf("*pv = %c\n",*(char *)pv);
    pv = &i;
    printf("*pv =0x%x\n",*(int *)pv);


    return 0;

}
