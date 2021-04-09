#include <stdio.h>
#include "ADT.h"

Complex InitComplex(float a, float b) {
//    构造复数类型A并返回
    Complex I;
    I.real = a;
    I.image = b;
    return I;
}

Complex Add(Complex A, Complex B) {
    Complex add;
    add.real = A.real + B.real;
    add.image = A.image + B.image;
    return add;
}

Complex Sub(Complex A, Complex B) {
    Complex sub;
    sub.real = A.real - B.real;
    sub.image = A.image - B.image;
    return sub;
}

Complex Mul(Complex A, Complex B) {
    Complex mul;
    mul.real = A.real * B.real - A.image * B.image;
    mul.image = A.real * B.image + A.image * B.real;
    return mul;
}

float GetReal(Complex I) {
    return I.real;
}

float GetImage(Complex I) {
    return I.image;
}

void Print_I(Complex I) {
    if (GetImage(I) == 0.0) {
        printf("%5.2f\n", GetReal(I));
    } else if (GetReal(I) == 0.0) {
        printf("%5.2fi\n", GetImage(I));
    } else {
        printf("%5.2f+%5.2fi\n", GetReal(I), GetImage(I));
    }
}

int main(void) {
    Complex I1, I2, add, sub, mul;
    float e1, e2, e3, e4;
    int a[2], b[2];

    printf("please input the first complex\nI1=");
    scanf("%f+%fi", &e1, &e2);
    I1 = InitComplex(e1, e2);

    printf("输入第二个复数\nI2=");
    scanf("%f+%fi", &e3, &e4);
    I2 = InitComplex(e3, e4);

    add = Add(I1, I2);
    Print_I(add);
    sub = Sub(I1, I2);
    Print_I(sub);
    mul = Mul(I1, I2);
    Print_I(mul);

    printf("输入第三个复数的实部和虚部：\n");
    scanf("%d%d,&a[0],&b[0]");
    printf("输入的复数为%d+%di\n", a[0], b[0]);

    printf("输入第四个复数：\n");
    scanf("%d+%di,&a[1],&b[1]");
    printf("输入的复数为%d+%di\n", a[1], b[1]);
}

