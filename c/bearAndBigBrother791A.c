#include <stdio.h>

int main() {
    int years = 0;
    int limak;
    int bob;
    scanf("%d %d", &limak, &bob);

    while (bob >= limak) {
        limak *= 3;
        bob *= 2;
        years++;
    }
    printf("%d\n", years);
}
