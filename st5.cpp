#include <stdio.h>
class Super {
   protected:
    int b;

   private:
    int c;

   public:
    int a;
    Super() {
        a = 1;
        b = 2;
        c = 3;
    }
};
class Sub : public Super {
   public:
    void show(void) {
        printf("%d¥n", a);
        printf("%d¥n", b);
    }
};
int main() {
    Super x;
    printf("a:%d\n", x.a);
    // printf("b:%d\n", x.b);
    // printf("c:%d\n", x.c);
    Sub y;
    y.show();
}