#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main() {
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    // Take character input
    scanf("%c", &ch);

    // Take string input
    scanf("%s", s);

    // Consume the newline character left by the previous scanf
    // or the provided instruction suggests another approach using scanf("\n")
    // Let's use the provided instruction method to consume the newline
    scanf("\n"); 

    // Take sentence input using the scanset method
    scanf("%[^\n]%*c", sen);

    // Print the character, string, and sentence
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
