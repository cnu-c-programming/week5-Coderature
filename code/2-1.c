#include <stdio.h>

int main()
{
    char *alphas[] = {"abc", "def", "hij"};
    int n = 3;

    for (int i = 0; i < n; i++) {
        printf("%s\n", alphas[i]);
    }

    return 0;
}
