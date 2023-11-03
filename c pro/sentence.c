#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowelCount[5] = {0}; // Index 0: 'a', Index 1: 'e', Index 2: 'i', Index 3: 'o', Index 4: 'u'

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        switch (ch) {
            case 'a':
                vowelCount[0]++;
                break;
            case 'e':
                vowelCount[1]++;
                break;
            case 'i':
                vowelCount[2]++;
                break;
            case 'o':
                vowelCount[3]++;
                break;
            case 'u':
                vowelCount[4]++;
                break;
        }
    }

    printf("Number of 'a's: %d\n", vowelCount[0]);
    printf("Number of 'e's: %d\n", vowelCount[1]);
    printf("Number of 'i's: %d\n", vowelCount[2]);
    printf("Number of 'o's: %d\n", vowelCount[3]);
    printf("Number of 'u's: %d\n", vowelCount[4]);

    return 0;
}
