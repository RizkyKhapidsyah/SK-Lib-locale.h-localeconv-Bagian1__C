/* localeconv example pada bahasa C */
#include <stdio.h>      /* printf */
#include <locale.h>     /* setlocale, LC_MONETARY, struct lconv, localeconv */
#include <conio.h>		/* _getch() */

/*	Source by CplusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : Visual Stdio 2019 */

int main() {
	setlocale(LC_MONETARY, "");
	struct lconv* lc;
	lc = localeconv();

	printf("Local Currency Symbol: %s\n", lc->currency_symbol);
	printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

	_getch();
	return 0;
}