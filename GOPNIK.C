/* ======================================================================== */
/* !]>                       AUTHOR  - alkat45                          <[! */
/* !]>                       CREATED - 09.11.2026                       <[! */
/* !]>                       LICENSE - GPLv3                            <[! */
/* !]>                       NAME    - GOPNIKSAY                        <[! */
/* !]>                       VERSION - 1.0                              <[! */
/* ======================================================================== */

/* NOTE : DON'T MAKE PROGRAMS IN C HOW I DID HERE!     */
/*      : IT'S A PROGRAM WAS MAKED FOR GET FUN OF THIS */

#include <stdio.h>
#include <string.h>

void print_line(int length) {
	int j = 0;

	for (; j != length; j++) {
		putchar('-');
	}
}

int main(int argc, char *argv[]) {
	int i = 0;
	int say_len;

	/* CHECK ERRORS FOR GOPNIK */
	if (argc != 2) {
		printf( (argc == 1) ? "ERROR : NO ARGUMENTS FOR GOPNIK!!!\n"
		                    : "ERROR : TO MANY ARGUMENTS FOR GOPNIK!!!\n");
		return 1;
	}

	say_len = strlen(argv[1]);

	/* GOPNIK SAY */
	printf("\n .");
	if (say_len > 27) {
		print_line(29);
		printf(".\n");

		while (i < say_len) {
			printf(" | %-27.27s |\n", argv[1] + i);
			i += 27;
		}

		printf(" '");
		print_line(29);

	} else {
		print_line(say_len + 2);
		printf(".\n");
		printf(" | %s |\n", argv[1]);
		printf(" '");
		print_line(say_len + 2);
	}
	printf("'\n");

	/* GOPNIK */
	printf("  ~      _______\n");
	printf("   ~    (-_____-)\n");
	printf("    ~~  | -. .- |\n");
	printf("     ~~ | + | + |\n");
	printf("       *====-- /\n");
	printf("        .| +++ |.\n");
	printf("       `,_______,'\n\n");

	return 0;
}
