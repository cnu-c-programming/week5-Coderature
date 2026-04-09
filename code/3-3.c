#include <stdio.h>

int main()
{
    int val = 7;
    int other = 77;
    const int *const p = &val;

    /* 에러 나는 부분 주석 처리 */
    /* *p = 10; */
    /* p = &other; */

    printf("%d\n", *p);

    return 0;
}
