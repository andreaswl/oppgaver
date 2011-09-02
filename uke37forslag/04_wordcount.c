#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* There are several possible interpretations and solutions
 * to this exercise.
 * One possible strategy could be to look through the file
 * character by character, checking if all the characters
 * of the word we are looking for are matched in the right order,
 * without gaps. If they are, we increment wordcount by one.
 *
 */

int wordcount(char *word, char *path)
{
	FILE *file;               /* the file descriptor */
	int wordcount, matched;   /* wordcount, and currently matched character count */
    int wordlen;
    char current;             /* the current character */

    wordcount = matched = 0;
    wordlen   = strlen(word);
    
    file = fopen(path, "r");
	if (file == NULL) return -1;

	while ((current = fgetc(file)) != EOF) { 

        if (word[matched] == current) {
            matched++;
            if (matched == wordlen) {
                wordcount++;
                matched = 0;
            }
        } else
            matched = 0;
    }
	fclose(file);
    return wordcount;
}



int main(int argc, char *argv[])
{
    int count;
    switch(argc) {
        case 3:
            count = wordcount(argv[1], argv[2]);
            printf("%d\n", count);
            break;
        default:
            printf("Usage: %s <word> <filename>\n", argv[0]);
    }

}

