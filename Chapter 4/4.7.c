#include <stdio.h>

int main()
{
	int grade;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;

	printf( "Enter the letter Grades.\n");
	printf( "Enter the EOF character to end input.\n" );

	while ( ( grade = getchar() ) != EOF ) {
		switch ( grade ) {
			case 'A':
			case 'a':
				aCount = aCount + 1;
				break;

			case 'B':
			case 'b':
				bCount = bCount + 1;
				break;

			case 'C':
			case 'c':
				cCount = cCount + 1;
				break;

			case 'D':
			case 'd':
				dCount = dCount + 1;
				break;

			case 'F':
			case 'f':
				fCount = fCount + 1;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				printf( "Incorrect letter grade entered.");
				printf( " Enter a new grade.\n");
				break;
		}
	}

	printf( "\nTotals for each letter grade are:\n");
	printf( "A: %d\n", aCount );
	printf( "B: %d\n", bCount );
	printf( "C: %d\n", cCount );
	printf( "D: %d\n", dCount );
	printf( "F: %d\n", fCount );

	return 0;

}
