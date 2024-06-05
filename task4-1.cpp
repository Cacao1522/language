#include <stdio.h>

#include <string>
class StudentClass {
   private:
    std::string name;
    int number;
    int method_a() { printf("func a"); };

   public:
    int k;
    int l;
    int method_b() { printf("func b %d", i); };
    void setName(std::string newName) { name = newName; }
    void setNumber(int newNumber) { number = newNumber; }
    void set(std::string newName, int newNumber) {
        name = newName;
        number = newNumber;
    }
    void show() { printf("func a"); }
};
int main() {
    TestClass t;
    t.method_b();
    t.k = 1;
    t.l = 2;
    printf("k:%d\n", t.k);
    printf("l:%d\n", t.l);
    // t.i = 1;
    // t.j = 2;
    //  printf("k:%d", t.i);
    //  printf("l:%d", t.j);
    //  t.method_a();
    t.call_method_a();
    return 0;
}