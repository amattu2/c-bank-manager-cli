/*
  Produced 2019-2021
  By https://amattu.com/links/github
  Copy Alec M.
  License GNU Affero General Public License v3.0
*/

/* Files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank-manager.h"

/* Function prototypes */
int menus_main();

/* Main function */
int main(int argc, char const *argv[]) {
	/* Primary Menu */
	int menu = menus_main();

	printf("Menu selected %d\n", menu);

	return 0;
}

/* Main option menu */
int menus_main() {
	/* Variables */
	int menu = 0;

	while (menu <= 0 || menu >= 3) {
		printf("Please select a sub-menu:\n");
		printf("  1) Customer\n");
		printf("  2) Transaction\n");
		printf("  3) Options\n");
		scanf("%d\n", &menu);
	}

	/* Return result */
	return menu;
}
