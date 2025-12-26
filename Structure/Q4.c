#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

void add(struct Distance d1, struct Distance d2, struct Distance *result) {
    result->feet = d1.feet + d2.feet;
    result->inch = d1.inch + d2.inch;

    if(result->inch >= 12.0) {
        result->feet += (int)(result->inch / 12);
        result->inch = result->inch - ((int)(result->inch / 12) * 12);
    }
}

int main() {
    struct Distance d1, d2;

    printf("Enter 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    
    struct Distance sum;
    
    add(d1, d2, &sum);

    printf("\nSum: %d feet %.2f inches\n", sum.feet, sum.inch);

    return 0;
}
