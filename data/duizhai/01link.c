/*
 * 链式物理结构
 * */
#include <stdio.h>

typedef struct node {
   int num;
   struct node *p_next;
}node;
int main()
{
   node val1 = {10}, val2 = {20}, val3 = {30},head = {0},tail = {0};
   node *p_node = NULL;
   head.p_next = &val1;
   val1.p_next = &val2;
   val2.p_next = &val3;
   val3.p_next = &tail;
  
   for(p_node = &head;p_node != &tail;p_node = p_node->p_next)
   {
      node *p_first = p_node;
      node *p_mid = p_first->p_next;
      node *p_last = p_mid->p_next;
      if(p_mid != &tail)
      {
         printf("%d",p_mid->num);
      }
      printf("\n");
   }
   return 0;
}
