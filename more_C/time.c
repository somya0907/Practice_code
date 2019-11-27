#include <time.h>
#include <stdio.h>
#include <stdlib.h>


void time_hello(char* timestamp)
{
    char *hell = (char*) malloc(sizeof(char)*16);
    printf("%s\n", timestamp);
    sprintf(hell,"%s",timestamp);
    free(timestamp);
    timestamp=NULL;
    printf("time is %s\n",hell);

}

int main()
{
    char *timestamp = (char*) malloc (sizeof(char)*16);
    time_t ltime = time(NULL);
    struct tm *lltime = NULL;
    lltime = localtime(&ltime);

    strftime(timestamp, 21 , "%FT%TZ", lltime);
    printf("time was %s\n",timestamp);
    //free(lltime);
    //lltime = NULL;
    time_hello(timestamp);
}

