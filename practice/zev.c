#include <stdio.h>

int main() {

    for (int i = 0; i <= 4; i++ ) {
      if (i >= ++i){
        printf("%d", i);        
      }
      printf("%d", i);
    }
  return 0;
}
