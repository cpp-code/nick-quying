#include <stdio.h> 
#include <time.h> 
#include <unistd.h>
#define DATE_OUT() printf("Now Time:%s, %s\n", __DATE__, __TIME__)

int main () 
{ 
    time_t start_t;
    time_t end_t;

    time(&start_t);
    sleep(2);
    time(&end_t);

    printf("Start Time: %s", ctime(&start_t));
    printf("End Time: %s", ctime(&end_t));
    printf("Program execution time: %f\n", difftime(end_t, start_t));
    DATE_OUT();
      
    time_t a_time = time(NULL);
    struct tm *a_t;
    a_t = localtime(&a_time); 
    printf("%s", asctime(a_t));

    return(0); 
} 
