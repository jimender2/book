#include <stdio.h>

int main()
{

	int passes = 0;
	int failures = 0;
	int student = 1;
	int result;

	while ( student <= 10 ){
		printf( "Enter result ( 1=pass, 2= fail ): ");
		scanf( "%d", &result);

		if ( result == 1 ){
			passes = passes + 1;\
			/*My own thinking*/
			student = student + 1;

/*		} else { */
		} else if ( result == 2 ){
			failures = failures + 1;
			/*My own thinking*/
			student = student + 1;
		} else {
			printf( "Invalid Number\n" );
		}


/*		student = student + 1; */

	}

	printf( "Passed %d\n", passes );
	printf( "Failed %d\n", failures );

	if ( passes > 8 ) {
		printf( "Raise tuition\n" );
	}

	return 0;

}