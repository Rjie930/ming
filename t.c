#include <stdio.h>
#include <windows.h>
int main()
{
    int a = 0, b = 0, cs;
    char c = '*';
    printf("������λ�������ڣ�\n"); // ��ӡ����ǰ���������ø����룬�����¶Է�
                                    // ͨ��if���ȥʵ��һ����򵥵������жϣ�Ҳ����ͨ��goto���ȥ����һ����������
    while (cs != 106)
    {
        scanf("%d", &cs);
        if (cs != 106)
            printf("���˴��ˣ��������룺\n");
    }
    // Ȼ���ǰ��ĵĴ�ӡ�кܶ��ַ�ʽ���������Ҳ���for���д�ӡ
    for (a = 0; a < 3; a++) // ��ӡǰ����
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