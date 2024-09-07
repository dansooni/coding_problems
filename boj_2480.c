#include <stdio.h>

int main() {
    int tmp, arr[7] = {0, };
    int max = 0;
    
    for(int i=0; i<3; i++) {
        scanf("%d", &tmp);
        arr[tmp] += 1;

        if(arr[max] < arr[tmp]) {
            max = tmp;
        }
        else if(arr[max] == arr[tmp] && max < tmp) {
            max = tmp;
        }
    }

    switch(arr[max]) {
        case 3:
            printf("%d", 10000+max*1000);
            break;
        case 2:
            printf("%d", 1000+max*100);
            break;
        case 1:
            printf("%d", max*100);
            break;
    }
    
    return 0;
}