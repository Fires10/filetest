#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *tempsensor;
FILE *output;
char buff[81];
char line1[81];
char line2[81];
char temp[20] = " ";
int i = 0;
int j = 0;


int main(int args, char *argv[])
{
    tempsensor = fopen( argv[1], "r" );

    /* fopen returns 0, the NULL pointer, on failure */
    if ( tempsensor == 0 )
    {
        printf( "Could not open Temperature Sensor\n" );
    }

    while(fgets(buff,sizeof(buff),tempsensor))
    {
        printf("%s",buff);


    }
    rewind(tempsensor);
    printf("\n here \n");

    fgets(buff,sizeof(buff),tempsensor);
    printf("here 0\n");
    printf("%s",buff);
    if(strstr(buff, "YES\n") )
    {
        printf("here 1\n");
        fgets(buff,sizeof(buff),tempsensor);
        while(   i < sizeof(buff))
        {
            printf("%d\n",i);
            if (buff[i] == '=')
            {
                printf("here 2 %d \n ",i);
                while(buff[i] != '\0')
                {

                    temp[j] = buff[i+1];
                    i++;
                    j++;

                }

              /*  temp[j] = '\0';*/

            }
            i++;
        }
        printf("%s  temp \n",temp);
        printf("\n");





    }
    printf("Success!\n");
    return 0;
}
