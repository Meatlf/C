// 读写二进制文件
// 参考资料
// [fopen , fread fwrite 函数读写二进制文件 问题总结](https://blog.csdn.net/zangyuanan320/article/details/51582260)
#include <stdio.h>

/*
* 函数说明: 写二进制文件
* 参数描述: 
*           fileName, 文件名称
*           buf, 要写的内存缓冲。
*           bufLen, 内存缓冲的长度
*   返回值: 0, 成功
*           -1, 失败
*
*/
int writeFile(const char *fileName, void *buf, int bufLen)
{
    FILE *fp = NULL;
    if (NULL == buf || bufLen <= 0)
        return (-1);

    fp = fopen(fileName, "wb"); // 必须确保是以 二进制写入的形式打开

    if (NULL == fp)
    {
        return (-1);
    }

    fwrite(buf, bufLen, 1, fp); //二进制写

    fclose(fp);
    fp = NULL;

    return 0;
}

// 写入文本
int writeFile2(const char *fileName)
{
    FILE *fp = NULL;
    int i = 0;

    fp = fopen(fileName, "w");

    if (NULL == fp)
    {
        return (-1);
    }
    char c = 'a';
    for (i = 0; i < 10; i++)
        fprintf(fp, "%d\n",c);

    fclose(fp);
    fp = NULL;

    return 0;
}

/*
 * 函数说明:  读二进制文件

*  参数描述: fileName, 文件名称
*             buf, 读出来的数据存放位置
*             bufLen, 数据的长度信息
*    返回值:  0, 成功
*             -1, 失败
*
*/
int readFile(const char *fileName, void *buf, int bufLen)
{
    FILE *fp = NULL;
    int i;
    if (NULL == buf || bufLen <= 0)
        return (-1);

    fp = fopen(fileName, "rb"); // 必须确保是以 二进制读取的形式打开

    if (NULL == fp)
    {
        return (-1);
    }

    fread(buf, bufLen, 1, fp); // 二进制读

    for (i = 0; i < bufLen; i++)
        printf("%u\n", *(((unsigned char *)buf) + i));
    fclose(fp);
    return 0;
}

int main()
{
    const char *filename = "file.txt";
    unsigned char buf[5] = {1, 2, 3, 4, 5};
    writeFile(filename, buf, 5);
    readFile(filename, buf, 5);

    const char *filename2 = "file2.txt";
    writeFile2(filename2);
    return 0;
}