/* trying to read an entire file into memory */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *tempsensor;
FILE *output;
char * mydata;



int main(int args, char *argv[])
{
    tempsensor = fopen( argv[1], "rb" );

    /* fopen returns 0, the NULL pointer, on failure */
    if ( tempsensor == 0 )
    {
        printf( "Could not open Temperature Sensor\n" );
    }
  




fseek(tempsensor, 0, SEEK_END);
long fsize = ftell(tempsensor);
rewind(tempsensor);

mydata = malloc(fsize + 1);
fread(mydata, fsize, 1, tempsensor);
fclose(tempsensor);

mydata[fsize] = 0;

}
