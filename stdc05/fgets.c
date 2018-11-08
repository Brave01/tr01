#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *buf = (char *)malloc(30);
  if(!buf)
  {
    printf("内存分配失败\n");
    return -2;
  }
 
  FILE *fp = fopen("123.txt","r");
#if 0
  if(!fp)
  {
     printf("打开失败\n");
     return -1;
  }
#endif 
  //fgets(buf,13,fp);
  fgets(buf,30,stdin);
 
  printf("buf = %s\n",buf);
  fclose(fp);
  free(buf);

  return 0;
}
