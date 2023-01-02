# include <stdio.h>
#include <string.h>
int main( )
{

FILE *filePointer ;

char dataToBeWritten[50];

filePointer = fopen("GfgTest.c", "w") ;

if ( filePointer == NULL )
{
printf( "GfgTest.c file failed to open." ) ;
}
else
{
    printf("The file is now opened.\n") ;

    // Write the dataToBeWritten into the file
    if ( strlen (dataToBeWritten) > 0 )
    {
    fputs("\n", filePointer) ;
    }

    fclose(filePointer) ;
    printf("Data successfully written in file GfgTest.c\n");
    printf("The file is now closed.") ;
}
return 0; 
}