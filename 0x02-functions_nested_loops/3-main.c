#include "main.h"

/**
 * Checks lowercase characters for _islower
 *
 * Return 0 (success)
 *
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return(0);
}

