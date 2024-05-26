#include <stdio.h>

#define MAX 100

typedef struct arr {
    int profit[MAX];
    int weight[MAX];
} Items;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDes(Items array[], int n, float ratio[]) {
    int i, j;
    Items temp;
    float temp_ratio;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                temp_ratio = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = temp_ratio;

                swap(&array->profit[j],&array->profit[j+1]);
                swap(&array->weight[j],&array->weight[j+1]);
            }
        }
    }
}

int main() {
    int n, M, i, j;
    float total_profit = 0.0;
    Items arr;

    printf("Enter the number of items in the array:\n");
    scanf("%d", &n);

    printf("Enter the capacity:\n");
    scanf("%d", &M);

    printf("Enter the profits and weights of the items:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &arr.profit[i], &arr.weight[i]);
    }

    printf("ID \t Profit \t Weight\n");
    for (i = 0; i < n; i++) {
        printf("%d \t %d \t %d\n", i+1, arr.profit[i], arr.weight[i]);
    }

    float ratio[MAX] = {0.0};
    int X[MAX] = {0}; // for storing the ids
    for (i = 0; i < n; i++) {
        ratio[i] = (float) arr.profit[i] / arr.weight[i];
    }

    sortDes(&arr, n, ratio);

    for (i = 0; i < n; i++) {
        if (M == 0) {
            break;
        }
        if (arr.weight[i] <= M) {
            total_profit += arr.profit[i];
            M -= arr.weight[i];
            X[i] = i+1;
        } else {
            total_profit += ratio[i] * M;
            M = 0;
            X[i] = i+1;
        }
    }
    printf("Total profit is %.2f\n", total_profit);
    printf("IDs of selected items:\n");
    for (i = 0; i < n; i++) {
        if (X[i] != 0) {
            printf("%d ", X[i]);
        }
    }

    return 0;
}
