#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int low[10000], high[10000];
    int low_count = 0, high_count = 0;
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            low[low_count++] = i;
            if (i != N / i) {
                high[high_count++] = N / i;
            }
        }
    }

    for (int i = 0; i < low_count; i++) {
        printf("%d\n", low[i]);
    }
    for (int i = high_count - 1; i >= 0; i--) {
        printf("%d\n", high[i]);
    }

    return 0;
}
