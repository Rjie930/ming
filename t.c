#include <stdio.h>
#include <windows.h>
int main()
{
    int a = 0, b = 0, cs;
    char c = '*';
    printf("输入三位神秘日期：\n"); // 打印心型前可以先设置个密码，考验下对方
                                    // 通过if语句去实现一个最简单的密码判断，也可以通过goto语句去设置一个次数输入
    while (cs != 106)
    {
        scanf("%d", &cs);
        if (cs != 106)
            printf("错了错了，重新输入：\n");
    }
    // 然后是爱心的打印有很多种方式，在这里我采用for进行打印
    for (a = 0; a < 3; a++) // 打印前三行
    {
        for (b = 0; b < 6 - 2 * a; b++)
        {
            printf(" ");
        }
        for (b = 0; b < 5 + 4 * a; b++)
        {
            printf("%c", c);
        }
        for (b = 0; b < 9 - 4 * a; b++)
        {
            printf(" ");
        }
        for (b = 0; b < 5 + 4 * a; b++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 31; b++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (a = 0; a < 6; a++)
    {
        for (b = 0; b < 2 + 2 * a; b++)
        {
            printf(" ");
        }
        for (b = 0; b < 27 - 4 * a; b++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 14 + 1 * a; b++)
        {
            printf(" ");
        }
        for (b = 0; b < 3 - 2 * a; b++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    system("color 0c");
    printf("Good luck bb~\n");
    system("pause");

    return 0;
}