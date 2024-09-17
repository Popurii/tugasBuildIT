#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[101], B[101];

//jujur kak ini saya sendiri masih kurang paham soal alprog yang penting selesai dulu dan saya pasti akan belajar lebih lanjut. mohon pengertiannya dan jangan dipermasalahkan (🙏)
    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    if (lenA != lenB) {
        printf("BERBEDA\n");
    } else {
        int identik = 1;  
        for (int i = 0; i < lenA; i++) {
            if (A[i] != B[i]) {
                identik = 0;  
                break;
            }
        }
        
        if (identik) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}