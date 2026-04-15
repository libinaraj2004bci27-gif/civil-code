#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
      if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\n")] = 0;
    }
    printf("Hello, World!\n");
    printf("%s\n", s);

    return 0;
}
