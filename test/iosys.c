#include "../header/iosys.h"

void main() {
    int a;
    char name[50];

    println("Enter an integer:");
    input("%d", &a);
    println("You entered: %d", a);

    println("Enter your name:");
    input("%s", name);
    println("Hello, %s!", name);

    log("INFO", "Application started.");
    log("ERROR", "An error occurred.");

    pause();

    return 0;
}