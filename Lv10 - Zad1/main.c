#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int suma(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + suma(n / 10);
}

int main() {
    int n;
    printf("Unesite cijeli broj: ");
    scanf("%d", &n);

    
    int sum = suma(n);
    
    FILE* file = fopen("suma.txt", "w");
    if (file == NULL) {
        printf("Greška pri otvaranju datoteke.\n");
        return 1;
    }
    
    fprintf(file, "%d", sum);

    fclose(file);

    printf("Suma znamenaka broja %d je %d i spremljena je u suma.txt\n", n, sum);

    return 0;
}
