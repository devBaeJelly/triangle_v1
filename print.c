#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "print.h"

char* inputString()
{
    char* f_command = malloc(sizeof(char) * 20);
    int cpString;
    int n;
    do
    {
        printf("� �������� ��� �Ͻðڽ��ϱ�?(�� �� help) : ");
        scanf("%s", f_command);
        cpString = compareString(f_command);
        if (cpString > 1 && cpString < 6)
        {
            printf("�� ���� ����Ͻðڽ��ϱ�? : ");
            scanf("%d", &n);
        }
        switch (cpString)
        {
        case 1:
            printHelp();
            break;
        case 2:
            triangleLB(n);
            break;
        case 3:
            triangleLU(n);
            break;
        case 4:
            triangleRB(n);
            break;
        case 5:
            triangleRU(n);
            break;
        default:
            if (cpString != 6)
                printError();
            else
                printf("�̿����ּż� �����մϴ�!\n");
            break;
        
        }
    } while (cpString != 6);
    return f_command;
}


void freeString(char* command)
{
    free(command);
}


void printHelp()
{
    printf("\n*------------------ H E L P ------------------*\n");
    printf("*COMMAND LIST\n\n");
    printf("HELP : ���� ���.\n");
    printf("LU : ���� ���� ������ �̵ �ﰢ�� ���.\n");
    printf("LB : ���� �Ʒ��� ������ �̵ �ﰢ�� ���.\n");
    printf("RU : ������ ���� ������ �̵ �ﰢ�� ���.\n");
    printf("RB : ������ �Ʒ��� ������ �̵ �ﰢ�� ���.\n");
    printf("EXIT : ����.\n\n");
}



void printError()
{
    printf("\n*------------ E R R O R -----------*\n");
    printf("�Է� ���� �ٽ� Ȯ�����ּ���!\n\n");
}