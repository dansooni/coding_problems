#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int a[size], b[size];

    for(int i=0; i<size; i++) {
        scanf("%d", a+i);
    }
    for(int i=0; i<size; i++) {
        scanf("%d", b+i);
    }
    
        

    return 0;
}