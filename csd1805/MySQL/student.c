#include <stdio.h>
#include <mysql/mysql.h>
int exedml(MYSQL* mysql,char *sqlstr)
{
  mysql_query(mysql,sqlstr);
  return mysql_errno(mysql);
}
void addstu(MYSQL* mysql)
{
   char sqlstr[200];
   char stuno[10];
   char stuname[10];
   char phone[20];
   int class_no;
   printf("请输入学生学号:");
   scanf("%s",stuno);
   printf("请输入学生姓名:");
   scanf("%s",stuname);
   printf("请输入联系方式:");
   scanf("%s",phone);
   printf("请输入班级编号:");
   scanf("%d",&class_no);
   sprintf(sqlstr,"insert into student values('%s','%s','%s','%s',%d)",
           stuno,stuno,stuname,phone,class_no);
   printf("%s\n",sqlstr);
   int errno = exedml(mysql,sqlstr);
   if(errno)
   {
      printf("添加学生失败，%s\n",mysql_error(mysql));
   }
   else
   {
      printf("添加成功!\n");
   }
}
int main()
{
    MYSQL* mysql;
    mysql = mysql_init(NULL);
    if(!(mysql_real_connect(mysql,"localhost","root","123456","choose",0,NULL,0)))
    {
       printf("%s\n",mysql_error(mysql));
       return -1;
    }
    mysql_query(mysql,"set character set utf8");
    int option;
    while(1)
    {
        printf("欢迎使用迷你版学生管理系统\n");
        printf("1.添加学生信息\n");
        printf("2.修改学生信息\n");
        printf("3.删除学生\n");
        printf("4.根据学号查询学生信息\n");
        printf("5.显示学生列表\n");
        printf("0.退出\n");
        printf("请选择：");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("学生管理系统--添加学生\n");
                addstu(mysql);
                break;
            case 2:
                printf("学生管理系统--修改学生\n");
                break;
            case 3:
                printf("学生管理系统--删除学生\n");
                break;
            case 4:
                printf("学生管理系统--根据学号查询学生\n");
                break;
            case 5:
                printf("学生管理系统--显示学生列表\n");
                break;
            case 0:
                printf("退出学生管理系统\n");
                exit(0);
        }
    }
    mysql_close(mysql);
    return 0;
}
