#include <stdio.h>

int main()
{
	int x;

	for ( x = 1; x <= 10; x++ ) {
		if (x == 5 ) {
			break;
		}

		printf( "%d ", x );
	}

	printf( "\nBroke out of the loop at x == %d\n", x );

	return 0;

}
