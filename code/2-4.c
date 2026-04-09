#include <stdio.h>

long my_strtol(char *str, char **endptr)
{
    long res = 0;
    int i = 0;

    /* 숫자 파싱 */
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        i++;
    }

    *endptr = &str[i];
    return res;
}

int main()
{
    char str[] = "2026hello";
    char *end;
    long val;

    val = my_strtol(str, &end);
    printf("%ld %s\n", val, end);

    return 0;
}
