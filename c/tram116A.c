#include <stdio.h>

int main() {
    int stops;
    int exiting;
    int entering;
    int passengers = 0;
    int min_capacity = 0;

    scanf("%d", &stops);

    for (int i = 0; i < stops; i++) {
        scanf(" %d %d", &exiting, &entering);
        entering -= exiting;
        passengers += entering;
        if (passengers > min_capacity) {min_capacity = passengers;}
    }

    printf("%d\n", min_capacity);

    return 0;
}
