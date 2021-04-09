//
// Created by Coco on 2021/4/6.
//

#include<iostream.h>

#define N 10

int max(int a[]);

int main() {
    int a[10];
    int i, m;
    for (i = 0; i < N; i++)
        cin >> a[i];
    m = max(a);
    cout << "最大值为：" << m;
}

int max(int b[]) {
    int i, n;
    n = b[0];
    for (i = 1; i < N; i++)
        if (n < b[i])n = b[i];
    return n;
}