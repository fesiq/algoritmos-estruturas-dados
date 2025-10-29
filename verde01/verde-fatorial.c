#include <stdio.h>

int main()
{
    int total = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        total*= i;
    }
    printf("%d", total);

    return 0;
}
