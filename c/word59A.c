#include <ctype.h>
#include <stdio.h>
#include <string.h>

void printUpper(char word[]);
void printLower(char word[]);

int main() {
    int caps = 0;
    int lowers = 0;
    char word[101];
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;

    int i = 0;
    do {
        if (isupper(word[i])) {
            caps++;
        } else {
            lowers++;
        }
        i++;
    } while (word[i] != '\0');

    if (caps > lowers) {
        printUpper(word);
    } else {
        printLower(word);
    }

    return 0;
}

void printUpper(char word[]) {
    int i = 0;
    while (word[i] != '\0') {
        word[i] = toupper(word[i]);
        i++;
    }

    printf("%s\n", word);
}

void printLower(char word[]) {
    int i = 0;
    while (word[i] != '\0') {
        word[i] = tolower(word[i]);
        i++;
    }

    printf("%s\n", word);
}
