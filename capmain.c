#include <stdio.h>
#include "rmvcaps.h"

int main(int argc, char* argv[]) {

	char c;

	while ((c=getchar()) !=EOF) {
		c = rmvCaps(c);
		printf("%c",c);
		}
}
