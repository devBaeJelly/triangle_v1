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
        printf("어떤 형식으로 출력 하시겠습니까?(모를 시 help) : ");
        scanf("%s", f_command);
        cpString = compareString(f_command);
        if (cpString > 1 && cpString < 6)
        {
            printf("몇 단을 출력하시겠습니까? : ");
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
                printf("이용해주셔서 감사합니다!\n");
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
    printf("HELP : 도움말 출력.\n");
    printf("LU : 왼쪽 위가 직각인 이등변 삼각형 출력.\n");
    printf("LB : 왼쪽 아래가 직각인 이등변 삼각형 출력.\n");
    printf("RU : 오른쪽 위가 직각인 이등변 삼각형 출력.\n");
    printf("RB : 오른쪽 아래가 직각인 이등변 삼각형 출력.\n");
    printf("EXIT : 종료.\n\n");
}



void printError()
{
    printf("\n*------------ E R R O R -----------*\n");
    printf("입력 값을 다시 확인해주세요!\n\n");
}