#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int left, right;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    left = 0;
    right = strlen(str) - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right])) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("The string is a palindrome.\n");
    return 0;
}
