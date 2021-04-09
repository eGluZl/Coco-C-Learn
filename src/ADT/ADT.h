//
// Created by Coco on 2021/4/5.
//

#ifndef DEMO_ADT_H
#define DEMO_ADT_H

#endif //DEMO_ADT_H

typedef struct Complex {
    float real;     //实部
    float image;     //虚部
} Complex;               //定义名为Complex的复数抽象类型

//声明函数 : 函数返回值类型 函数名（参数类型 参数名）；
Complex InitComplex(float a, float b);        //赋值
Complex Add(Complex A, Complex B);           //+
Complex Sub(Complex A, Complex B);         //—
Complex Mul(Complex A, Complex B);      //*
Complex Div(float a, float b);        ///
float GetImage(Complex I);

float GetReal(Complex I);

void Print_I(Complex I);

