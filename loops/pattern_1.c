#include <stdio.h>

int main() {
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            printf("%d ",i+j);
        }
        printf("\n");
    }
    return 0;
}