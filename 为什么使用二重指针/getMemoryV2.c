#include <stdio.h>

void GetMemory(char **p)
{
    *p = "bbb";
}

int main(int argc, char *argv[])

{
    char *v = "aaa";

    GetMemory(&v);

    printf("%3s\n", v);

    return 0;
}