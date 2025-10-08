
  
#include <stdio.h>
#include <string.h>  // required for strlen()

int main() {
    char str[] = "abc";
    int freq[256] = {0};
    int ln = strlen(str);

    // Count character frequencies
    for (int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;  // use [] not {}
    }

    // Print non-zero frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c, %d\n", i, freq[i]);
        }
    }

    return 0;  // good practice
}
