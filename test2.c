/* trying to read an entire file into memory */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *tempsensor;
FILE *output;



int main(int args, char *argv[])
{
    tempsensor = fopen( argv[1], "r" );

    /* fopen returns 0, the NULL pointer, on failure */
    if ( tempsensor == 0 )
    {
        printf( "Could not open Temperature Sensor\n" );
    }

}
