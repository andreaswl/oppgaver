#include <stdio.h>

/* About enums: http://publications.gbdirect.co.uk/c_book/chapter6/enums.html */
typedef enum {
	DEBUG = 1,
	ERROR,
	INFO
} log_type;

/* Dette er et eksempel pÃ¥ hvordan loggingsfunksjonen kunne ha sett ut. En mye bedre
 * variant er Ã¥ skrive ting ut til en fil, sammen med klokkeslett og eventuelt annen
 * informasjon som kan bli nyttig ved debugging. En god loggings-funksjon kan gjÃ¸re
 * debugging mye enklere. */
void log_msg(log_type mode, char *s) {
	switch(mode) {
		case DEBUG:
			printf ("DEBUG: %s", s);
			break;

		case ERROR:
			printf ("ERROR: %s", s);
			break;

		case INFO:
			printf ("INFO : %s", s);
	}
}

