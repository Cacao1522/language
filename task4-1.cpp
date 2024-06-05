#include <stdio.h>

#include <string>
class StudentClass {
   private:
    std::string name;
    int number;

   public:
    void setName(std::string newName) { name = newName; }
    void setNumber(int newNumber) { number = newNumber; }
    void set(std::string newName, int newNumber) {
        name = newName;
        number = newNumber;
    }
    void show() { printf("名前：%s 学生番号：%d\n", name.c_str(), number); }
};
int main() {
    StudentClass t;
    t.set("加藤薫", 34714037);
    t.show();
    return 0;
}