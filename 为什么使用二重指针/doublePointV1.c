void fun1(char sz[], char search, char *pa)

{

    for (int i = 0; *(sz + i) != 0; i++)

    {

        if (*(sz + i) == search)

        {

            pa = sz + i;

            break;
        }

        else if (*(sz + i) == 0)

        {

            pa = 0;

            break;
        }
    }
}

int main(int argc, char *argv[])

{

    char str[] = {"afsdfsdfdf/0"};

    char a = 'd';

    char *p = 0;

    fun1(str, a, p);

    if (0 == p)

    {

        printf("没找到！/n");
    }

    else

    {

        printf("找到了，p=%d", p);
    }

    return 0;
}