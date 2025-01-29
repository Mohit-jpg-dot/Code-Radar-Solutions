#include <stdio.h>
#include <ctype.h>  // For the isalpha() function

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a letter (vowel or consonant)
    if (isalpha(ch)) {
        // Convert character to lowercase to simplify comparison
        ch = tolower(ch);

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character '%c' is a vowel.\n", ch);
        } else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    }
    // Check if the character is not a letter (i.e., special character)
    else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
