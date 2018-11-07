#include <stdio.h>

int main()
{
  FILE *fp = fopen("123.txt","a+");
  if(fp == NULL)
  {
     printf("打开失败\n");
     return -1;
  }
  printf("打开成功\n");
  char c = 0;
  while((c = getc(fp)) != EOF) 
  {
     printf("c = %c\n",c);
  }
  putc('hello world',fp);
  putc('!\n',fp);
 
  return 0;
}
