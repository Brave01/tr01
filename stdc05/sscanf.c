#include <stdio.h>

typedef struct {
   char name[20];
    int score;
    int age;
}Student;

int main()
{
   Student s;
   char *pc = "智障 80 20";
   printf("%s\n",pc);

   sscanf(pc,"%s%d%d",s.name,&s.score,&s.age);
   printf("%s\n",s.name);
   printf("%d\n",s.score);
   printf("%d\n",s.age);

   return 0;
}
