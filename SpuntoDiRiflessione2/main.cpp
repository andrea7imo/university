#include <iostream>
#include "Buffer.h"

int main() {
    Buffer b(10);
    int i, value;

    for (i = 0; i < 10; i++){
      b.setData(i,i);
    }

    for (i=0; i < 10; i++){
        b.getData(i, &value);
        printf("%d\n", value);
    }

    return 0;
}