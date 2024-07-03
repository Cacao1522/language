#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
class Person
{
private:
    std::string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(std::string name_, int age_) : name(name_), age(age_) {}

    std::string get_name() const { return name; }
    int get_age() const { return age; }
    void set_name(std::string name_)
    {
        name = name_;
    }
    void set_age(int age_)
    {
        age = age_;
    }

    void print() const
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main()
{
    auto cmp = [](Person x, Person y)
    {
        return x.get_age() < y.get_age();
    };

    std::vector<Person> p(3);
    p[0].set_name("Ichiro");
    p[0].set_age(25);
    p[1].set_name("Jiro");
    p[1].set_age(21);
    p[2].set_name("Saburo");
    p[2].set_age(32);
    std::sort(p.begin(), p.end(), cmp);
    for (auto x : p)
        x.print();

    return 0;
}