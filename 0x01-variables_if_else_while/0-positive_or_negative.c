#include <stdlib.h>
#include <time.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n > 0
		printf("%d\n", "n is positive/n")
	else if n == 0
		printf("%d\n", "n is zero/n")
	else printf("%d\n", "n is negative/n")
	return (0);
}
