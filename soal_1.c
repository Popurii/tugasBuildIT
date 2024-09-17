#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//jujur kak ini saya sendiri masih kurang paham soal alprog yang penting selesai dulu dan saya pasti akan belajar lebih lanjut. mohon pengertiannya dan jangan dipermasalahkan (🙏)

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int angka[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &angka[i]);
    }

    qsort(angka, N, sizeof(int), compare);

    for (int i = 0; i < N; i++) {
        printf("%d\n", angka[i]);
    }

    return 0;
}