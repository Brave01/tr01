#include <stdio.h>

int main(char *s,char *d)
{
  FILE *fp = fopen(s,"r");
  //char c[20] = {0};
  getchar();
  char c = 0;
  c = getc(fp);
  getchar();
  printf("%s\n",c);
  FILE *fp1 = fopen("*d","w");

  return 0;
}
