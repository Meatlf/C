// 参考资料
// [1] [printf按8进制、10进制、16进制输出以及高位补0](https://blog.csdn.net/sefwin/article/details/82667000)
void fun2(char sz[], char search, char **ppa)

{

    for (int i = 0; *(sz + i) != 0; i++)

    {

        if (*(sz + i) == search)

        {

            *ppa = sz + i;

            break;
        }

        else if (*(sz + i) == 0)

        {

            *ppa = 0;

            break;
        }
    }
}

int main(int argc, char *argv[])

{

    char str[] = {"afsdfsdfdf/0"};

    char a = 'd';

    char *p = 0;

    fun2(str, a, &p);

    if (0 == p)

    {

        printf("没找到！/n");
    }

    else

    {

        printf("找到了，p=0x%x\n", p);
    }

    return 0;
}