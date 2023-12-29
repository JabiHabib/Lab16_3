#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define M 5

int main() {
    setlocale(LC_ALL, "Ukr");
    // Змінні для індексів
    int i, j;
    // Двовимірний масив (матриця)
    int a[M][M];

    // Ініціалізація генератора випадкових чисел
    srand(time(NULL));

    // Заповнення матриці рандомними значеннями
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            a[i][j] = rand() % 101; // Випадкове ціле число в межах від 0 до 100
        }
    }

    // Вивід початкової матриці
    printf("Початкова матриця:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("[%0.2d]", a[i][j]);
        }
        printf("\n");
    }

    // Заміна нулями елементів, що лежать нижче головної діагоналі
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            if (i > j) {
                a[i][j] = 0;
            }
        }
    }

    // Вивід матриці після заміни
    printf("\nМатриця пiсля замiни нулями:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("[%0.2d]", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}