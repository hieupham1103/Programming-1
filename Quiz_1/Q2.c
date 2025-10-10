#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    printf("Enter a,b,c of polynomial equation ax^2 + bx + c = 0:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("No real root");
    }
    else if (delta == 0) {
        double root = -b / (2*a);
        printf("One real root: %.2lf", root);
    }
    else {
        double root1 = (-b + sqrt(delta)) / (2*a);
        double root2 = (-b - sqrt(delta)) / (2*a);
        printf("Two real roots: %.2lf and %.2lf", root1, root2);
    }

    return 0;
}