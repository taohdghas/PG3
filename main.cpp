#include <stdio.h>

template <typename T>
T Min(T a, T b) {
    return (a < b) ? a : b;
}

template <>
char Min(char a, char b) {
    printf("数字以外は代入できません\n");
    return 0;
}

int main() {
    int a = 10, b = 20;
    float c = 5.5f, d = 2.3f;
    double e = 7.8, f = 7.9;
    char g = 'A', h = 'B';

    // int
    printf("Min(%d, %d) = %d\n", a, b, Min(a, b));
    // float
    printf("Min(%.1f, %.1f) = %.1f\n", c, d, Min(c, d));
    // double
    printf("Min(%.1lf, %.1lf) = %.1lf\n", e, f, Min(e, f));
    // char
    printf("Min(%c, %c) = %d\n", g, h, Min(g, h));

    return 0;
}