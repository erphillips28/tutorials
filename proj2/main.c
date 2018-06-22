#include <stdio.h>

int main(int argc, char *argv[]) {
    int age;
    char name[20];

    // scanf(<format>, variable's address (&var))
    // int    -> %d
    // string -> %s

    
    
    // Using printf, ask the user for their age
    printf("whats ur age: ");
    // Using scanf, receive the user's name
    scanf ("%d", &age);
    // Using printf, ask the user for their name
    printf(" provide your name: ");
    // Using scanf, receive the user's name
    scanf("%s", name); //the variable "name" is already defined as a character array so no &
    // Using printf, print out the user's name and age like so:
    // "Hello. My name is <name> and I am <age> years old."
    printf ("Hello. my name is %s and i am %d years old.", name, age);
    

}