#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int trocado;

    for (i = 0; i < n-1; i++) {
        trocado = 0;

        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                trocado = 1;
            }
        }

        if (trocado == 0) {
            break;
        }
    }
}

int main() {
    int n, i;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int arr[n];

    printf("Digite os números inteiros: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Array ordenado em ordem decrescente: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}