#include <stdio.h>

int sum_range(int *start, int *end)
{
    int sum = 0;

    while (start < end) {
        sum = sum + *start;
        start++;
    }

    return sum;
}

int main()
{
    int data[] = {10, 20, 30, 40, 50, 60, 70};
    int r;

    r = sum_range(&data[1], &data[4]);
    printf("%d\n", r);

    return 0;
}
