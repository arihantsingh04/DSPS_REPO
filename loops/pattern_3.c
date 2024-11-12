#include <stdio.h>

int main() {
    char c;
    c='A';
    for (int i=1;i<4;i++){
        for (int j=0;j<i;j++){
            printf("%c ",c);
        }
        c++;
        printf("\n");
    }
    return 0;
}