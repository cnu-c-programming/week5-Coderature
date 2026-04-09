#include <stdio.h>

void read_only(const int *arr, int size)
{
    // 출력
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(arr + i));
    }
}

int main()
{
    int nums[] = {10, 20, 30, 40, 50};

    read_only(nums, 5);

    return 0;
}
