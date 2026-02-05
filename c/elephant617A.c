#include <stdio.h>

int main() {
    int house;
    int steps = 0;
    scanf("%d", &house);

    while (house > 0) {
        if (house >= 5) {
            house -= 5;
            steps++;
        } else if (house >= 4) {
            house -= 4;
            steps++;
        } else if (house >= 3) {
            house -= 3;
            steps++;
        } else if (house >= 2) {
            house -= 2;
            steps++;
        } else {
            house -= 1;
            steps++;
        }
    }

    printf("%d\n", steps);
}
