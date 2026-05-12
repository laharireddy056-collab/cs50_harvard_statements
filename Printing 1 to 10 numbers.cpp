#include <stdio.h>

struct Numbers {
    int num;
};

int main() {
    struct Numbers n[10];
    int i;
    for(i = 0; i < 10; i++) {
        n[i].num = i + 1;
    }
    for(i = 0; i < 10; i++) {
        printf("%d\n", n[i].num);
    }

    return 0;
}

