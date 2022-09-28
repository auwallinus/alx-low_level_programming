/*
 * is_palindrome.c
 *
 *
 * Read an input from stdin, print it back to the user and
 * report if it is a palindrome.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 31

/*
  calculate the length of the string
 */
int get_string_length(char *str);

/*
  return 1 if it is palindrome
  return 0 if it is not palindrome
 */
int is_palindrome(char *str);

int main(int argc, char *argv[])
{
    char input_string[MAXLENGTH];

    // get user input
    printf("Enter a string to test: ");
    scanf("%s", input_string);

    if(is_palindrome(input_string)) {
	printf("%s is a palindrome\n", input_string);
    } else {
	printf("%s is not a palindrome\n", input_string);
    }

    return 0;
}

int get_string_length(char *str)
{
    int length = 0;
    // if it is not '\0' keep moving
    while(*str != '\0') {
	str++;
	length++;
    }
    return length;
}

int is_palindrome(char *str)
{
    char *head = str;
    int length = get_string_length(str);
    char *tail = &str[length - 1];

    // two pointers to check palindrome and no spare space is being used
    while(head < tail) {
	if(*head != *tail) {
	    return 0;
	}
	head++;
	tail--;
    }
    return 1;
}
