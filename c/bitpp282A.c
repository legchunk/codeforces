#include <stdio.h>
#include <string.h>

int main() {
    int x = 0;
    int operationCount = 0;
    scanf("%d", &operationCount);

    char activeOp[4] = {0};

    for (int i = 0; i < operationCount; i++) {
        if (scanf(" %3s", activeOp) != 1) return 1;
        if (strstr(activeOp, "++")) {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}
