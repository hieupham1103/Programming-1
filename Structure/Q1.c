#include<stdio.h>

struct complex {
    float real;
    float img;
};

void add_complex(struct complex c1, struct complex c2, struct complex *result) {
    result->real = c1.real + c2.real;
    result->img = c1.img + c2.img;
}


int main() {
    int n;
    scanf("%d", &n);
    struct complex a[n];

    for(int i = 0; i < n; i++) {
        scanf("%f %f", &a[i].real, &a[i].img);
    }

    struct complex sum = {0, 0};
    for(int i = 0; i < n; i++) {
        add_complex(sum, a[i], &sum);
    }
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.img);

    return 0;
}
