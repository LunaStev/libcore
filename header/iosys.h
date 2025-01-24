#ifndef IOSYS_H
#define IOSYS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

void println(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\n");
}

void input(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vscanf(format, args);
    va_end(args);
}

void log(const char *level, const char *message) {
    printf("[%s] %s\n", level, message);
}

void pause() {
    println("Press Enter to continue...");
    getchar();
}


#endif //IOSYS_H
