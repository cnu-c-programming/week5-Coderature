#include <stdio.h>
#include <stdlib.h>

void echo()
{
    char buf[5];

    /* 4글자만 입력받기 */
    scanf("%4s", buf);
    printf("%s\n", buf);
}

int main()
{
    int x = 42;

    echo();

    return 0;
}
