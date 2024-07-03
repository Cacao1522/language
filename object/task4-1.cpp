#include <stdio.h>
#include <string>

class Student
{
private:
    std::string name;
    int number;

public:
    void setName(std::string name_) { name = name_; }
    void setNumber(int number_) { number = number_; }
    void set(std::string name_, int number_)
    {
        name = name_;
        number = number_;
    }
    void show() { printf("名前：%s 学生番号：%d\n", name.c_str(), number); }
    Student() {}
    Student(std::string name_, int number_)
    {
        name = name_;
        number = number_;
    }
};
int main()
{
    Student s;
    s.set("加藤薫", 34714037);
    s.show();
    return 0;
}