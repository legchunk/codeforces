#include <stdio.h>
#include <string.h>

int main() {
    char username[101] = {0};
    char usedchars[26] = {0};
    fgets(username, sizeof(username), stdin);
    username[strlen(username) - 1] = '\0'; // Remove newline character

    for (int i = 0; i < (sizeof(username)) / sizeof(username[0]); i++) {
        if (username[i] == '\0') {
            break;
        }

        if (!strchr(usedchars, username[i])) {
            usedchars[strlen(usedchars)] = username[i];
            usedchars[strlen(usedchars) + 1] = '\0';
        }

    }

    if (strlen(usedchars) % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
