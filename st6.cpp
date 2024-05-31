#include <stdio.h>
int db(int value) {
    printf("intです．");
    return 2 * value;
}
int db(short value) {
    printf("shortです．");
    return 2 * value;
}
int db(double value) {
    printf("doubleです．");
    return 2 * value;
}
int db(float value) {
    printf("floatです．");
    return 2 * value;
}
int main() {
    int a = 1;
    short b = 2;
    float c = 3.f;
    double d = 4.0;
    db(a);
    db(b);
    db(c);
    db(d);
    return 0;
}