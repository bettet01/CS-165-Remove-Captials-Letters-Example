#include <stdio.h>
#include "rmvcaps.h"

char rmvCaps(char c) {

	if (c >= 'A' && c <= 'Z')
		c = c+32;
	return c;

}
