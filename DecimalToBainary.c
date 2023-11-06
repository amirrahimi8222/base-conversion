#include <stdio.h>

int main() {
    int num, s;
    int baghimandeh[10];
    scanf("%d", &num);
    for (int i = 0; num >= 1 && i < 10; i ++, num = num / 2) {
        baghimandeh[i] = num % 2;
        s = i;
    }
    for (; s >= 0; s --)
        printf("%d", baghimandeh[s]);

    return 0;
}