#include <stdio.h>
#include <string.h>

int main()
{
  //char *str0 = " ";
  char *str1 = "hello ";
  char *str2 = "world";
  int i = 30;
  char a[20] = {0};  

  //printf("i = %d\n",i);
  sprintf(a,"%s",str1);
  sprintf(a+strlen(str1),"%s",str2);
  printf("%d\n",strlen(str1));
  printf("%s\n",a);
#if 0
  for(int i=0;i<10;i++)
  {
    printf("a[%d] = %c\n ",i,a[i]);
  }
#endif

  return 0;
}
