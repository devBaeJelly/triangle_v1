#include <stdio.h>
#include <string.h>

int compareString(char* command)
{
    
    if (strcmp(command, "help") == 0 || strcmp(command, "HELP") == 0)
        return 1;
    else if (strcmp(command, "lb") == 0 || strcmp(command, "LB") == 0)
        return 2;
    else if (strcmp(command, "lu") == 0 || strcmp(command, "LU") == 0)
        return 3;
    else if (strcmp(command, "rb") == 0 || strcmp(command, "RB") == 0)
        return 4;
    else if (strcmp(command, "ru") == 0 || strcmp(command, "RU") == 0)
        return 5;
    else if (strcmp(command, "exit") == 0 || strcmp(command, "EXIT") == 0)
        return 6;
    else
        return -1;
    
}



void triangleLB(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}


void triangleLU(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}


void triangleRB(int n)
{
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < m-1; k++)
            putchar(' ');
        for (int j = 0; j < i; j++)
        {
            putchar('*');
        }
        putchar('\n');
        m--;
    }
}

void triangleRU(int n)
{
    int m = 0;
    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < m; k++)
            putchar(' ');
        for (int j = 0; j < i; j++)
        {
            putchar('*');
        }
        putchar('\n');
        m++;
    }
}

