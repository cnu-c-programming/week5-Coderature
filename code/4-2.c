#include <stdio.h>
#include <stdlib.h>

void echo()
{
    char buf[5];

    // 입력 받기
    fgets(buf, 5, stdin);
    printf("%s\n", buf);
}

int main()
{
    int x = 42;

    echo();

    return 0;
}
