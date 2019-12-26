#include <stdio.h>
#include <stdarg.h>

void variable_arguments(const char *format, ...) 
{
    va_list args;
    va_start(args, format);

    while(*format) {
        if('-' == *format) {
            const char *s = va_arg(args, const char *);
            printf("%s", s);
        } else {
            printf("%c", *format);
        }
        format++;
    }
    
    va_end(args);
}  

int main(int argc,char *argv[]) {
    variable_arguments("nick--", "is", "handsome");
    return 0;
}
