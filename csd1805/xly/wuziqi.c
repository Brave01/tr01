#include <stdio.h>

int init_map();
int show_map();
int play();
int judge(int,int);

// 全局地图
char map[10][10];

int main()
{
    // 打印地图
    init_map();
    show_map();
    // 白子/黑子下棋
    play();
    // 判断输赢
    return 0;
}

int init_map()
{
    int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            map[i][j] = ' ';
        }
    }
    return 0;
}
int show_map()
{
    int i, j;
    printf("\n");
    printf("   0 1 2 3 4 5 6 7 8 9 \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", i);
        for(j = 0; j < 10; j++)
        {
            if(map[i][j] == ' ') 
                printf("|%c", map[i][j]);
            else if(map[i][j] == 'O') 
                printf("|%c", map[i][j]);
            else if(map[i][j] == 'X') 
                printf("|%c", map[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
    return 0;
}

int play()
{
    int now, col; // 用户输入坐标
    int count = 0;

    while(1)
    {
        if(count % 2 == 0)
        {
            // 白子下棋 以O表示
            printf("白子下棋\n");
            printf("请输入横坐标:");scanf("%d", &now);
            printf("请输入纵坐标:");scanf("%d", &col);

            if( now >=0 && now <= 9 
                    && col >= 0 && col <=9
                    && map[now][col] == ' ')
            {
                map[now][col] = 'O';
                show_map(); // 重新打印棋盘
                if(judge(now, col) == 1)
                {
                    printf("白子胜利\n");
                    break;
                }
                count++;
            }
            else
            {
                printf("位置非法或者该位置已有棋子，请重新布棋\n");
            }
        }
        else
        {
            // 黑子下棋 以X表示
            printf("黑子下棋\n");
            printf("请输入横坐标:");scanf("%d", &now);
            printf("请输入纵坐标:");scanf("%d", &col);

            if( now >=0 && now <= 9 
                    && col >= 0 && col <=9
                    && map[now][col] == ' ')
            {
                map[now][col] = 'X';
                show_map(); // 重新打印棋盘
                if(judge(now, col) == 1)
                {
                    printf("黑子胜利\n");
                    break;
                }
                count++;
            }
            else
            {
                printf("位置非法或者该位置已有棋子，请重新布棋\n");
            }

        }
    }
    return 0;
}

int judge(int x, int y)
{
    char k = map[x][y];
    int i = 0;
    // 横向五个
    for(i = 0; i+4 < 10; i++)
    {
        if(map[x][i] == k && map[x][i+1] == k && map[x][i+2] == k && map[x][i+3] == k && map[x][i+4] == k)
            return 1;
    }
    // 纵向五个
    for(i = 0; i+4 < 10; i++)
    {
        if(map[i][y] == k && map[i+1][y] == k && map[i+2][y] == k && map[i+3][y] == k && map[i+4][y] == k)
            return 1;
    }
    return 0;
}
