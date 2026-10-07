#include <stdio.h>

int main() {

    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]);
    // Outputs 25

    myNumbers[0] = 33;
    
    printf(" %d", myNumbers[0]);
    
    // Now outputs 33 instead of 25
    return 0;

}