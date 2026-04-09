#include <stdio.h>
#include <string.h>

void sort_strings(char **arr, int n)
{
    char *t;

    /* 정렬 수행 */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main()
{
    char *words[] = {"apple", "ant", "banana", "cherry"};
    int n = 4;

    sort_strings(words, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
