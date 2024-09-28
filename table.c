// Table Program
#include <stdio.h>

int main() {
    int i = 1, m;
    printf("Enter the number: ");
    scanf("%d", &m);

    while (i < 11) {
        printf("%d x %d = %d\n", m, i, i * m);
        i++;
    }
    
    return 0; 
}
