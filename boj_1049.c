#include <stdio.h>
#include <stdlib.h>

int minimum(int *int_arr) {
    int min = INT_MAX;

    for(int i=0; i<sizeof(int_arr)/4; i++) {
        if(int_arr[i] < min) {
            min = int_arr[i];
        }
    }

    return min;
};

int main() {
    int n, m, min_set_price, min_sole_price;
    scanf("%d %d", &n, &m);
    int *set_price = (int*)malloc(sizeof(int)*m);
    int *sole_price = (int*)malloc(sizeof(int)*m);

    for(int i=0; i<m; i++) {
        scanf("%d %d", set_price+i, sole_price+i);
    }
    
    min_set_price = minimum(set_price);
    min_sole_price = minimum(sole_price);

    if(min_set_price > min_sole_price * 6) {
        printf("%d", min_sole_price*n);
    }
    else if(min_set_price < min_sole_price * (n % 6)) {
        printf("%d", min_set_price*(n/6+1));
    }
    else {
        printf("%d", min_set_price*(n/6)+min_sole_price*(n%6));
    }

    return 0;
}