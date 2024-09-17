#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//jujur kak ini saya sendiri masih kurang paham soal alprog yang penting selesai dulu dan saya pasti akan belajar lebih lanjut. mohon pengertiannya dan jangan dipermasalahkan (🙏)
int is_prime(int N) {
    if (N <= 1) return 0; 
    if (N <= 3) return 1; 

    if (N % 2 == 0 || N % 3 == 0) return 0;

    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) return 0;
    }

    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (is_prime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}