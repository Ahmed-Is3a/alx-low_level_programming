#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * cap_string - check the code
 *
 * @p: pointer
 * Return: Always 0.
 */
bool isSeparator(char c) {
	char separators[] = " \t\n,;.!?\"(){}";
	for (int i = 0; separators[i] != '\0'; i++) {
		if (c == separators[i]) {
			return true;
		}
	}
	return false;
}

// Function to capitalize all words in a string
char *cap_string(char *str) {
	// Check for NULL pointer
	if (str == NULL) {
		return NULL;
	}

	// Initialize a flag to indicate the start of a new word
	bool newWord = true;

	// Iterate through the string
	for (int i = 0; str[i] != '\0'; i++) {
		// If the current character is a separator, set newWord to true
		if (isSeparator(str[i])) {
			newWord = true;
		}
		// If the current character is not a separator and newWord is true, capitalize it
		else if (newWord) {
			str[i] = toupper(str[i]);
			newWord = false;
		}
	}

	return str;
}

