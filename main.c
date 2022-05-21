#define _CRT_SECURE_NO_WARNINGS
#include "print.h"

 
int main(void)
{

    char* command = inputString();
    freeString(command);

    return 0;
}
