
#include <stdio.h>
#include <string.h>


int main (void) {
const int MAX = 100;
char source[MAX] = "123456789";
char source1[MAX] = "123456789";
char destination[MAX] = "abcdefg";
char destination1[MAX] = "abcdefg";
char *return_string;
int index = 5;

/* This is how strcpy works */
printf("destination is originally = '%s'\n", destination);
return_string = strcat(destination, source);
printf("after strcat, dest becomes '%s'\n\n", destination);

/* This is how strncpy works */
printf( "destination1 is originally = '%s'\n", destination1 );
return_string = strncat( destination1, source1, index );
printf( "After strncat, destination1 becomes '%s'\n", destination1 );

}
