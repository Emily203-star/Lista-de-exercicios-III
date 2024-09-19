#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    printf("Digite o número de letras: ");
    scanf("%d", &n);
    
    char letras[n+1]; 
    
    printf("Digite as letras sem espaços: ");
    scanf("%s", letras);
    
    bubbleSort(letras, n);
    
    printf("Letras ordenadas: %s\n", letras);
    
    return 0;
}