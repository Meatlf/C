// 参考资料：[1]  [VS2010中“Stack around the variable 'XXX' was corrupted.”处理方法](https://blog.csdn.net/hou09tian/article/details/75042206)
#include <stdio.h>

typedef struct Print
{

    char *FileName;

    char *PrintName;

} StrPrint;

int main(int argc, char *argv[])

{

    StrPrint a[2];

    StrPrint *Print;

    Print = a;

    Print->PrintName = "123";

    Print->FileName = "456";

    printf("%s,%s\n", Print->PrintName, Print->FileName);

    Print++;

    Print->PrintName = "abc";

    Print->FileName = "def";
    printf("%s,%s\n", Print->PrintName, Print->FileName);
    return 0;
}