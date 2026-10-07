#include <stdio.h>

int main() {

    int myNumbers[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // This above methods works because we are dividing by size. 
    // In bytes by size in bytes not by the array[0] Int Value.
    printf("%d", length);  // Prints 5

  return 0;
}
