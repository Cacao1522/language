#include <stdio.h>
#include <cfloat>
#include <string>
class Comparable
{
public:
    virtual void print() = 0;
    virtual bool LTE(Comparable *a) = 0;
};
class Double : public Comparable
{
private:
    double val;

public:
    Double(double v) { val = v; }
    bool LTE(Comparable *a)
    {
        if (val <= (static_cast<Double *>(a)->val))
            return true;
        else
            return false;
    }
    void print() { printf("%f\n", val); }
};
class Char : public Comparable
{
private:
    char val;

public:
    Char(char v) { val = v; }
    bool LTE(Comparable *a)
    {
        if (val <= (static_cast<Char *>(a)->val))
            return true;
        else
            return false;
    }
    void print() { printf("%c\n", val); }
};

class Person : public Comparable
{
private:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}
    bool LTE(Comparable *a)
    {
        if (age <= (static_cast<Person *>(a)->age))
            return true;
        else
            return false;
    }
    void print()
    {
        printf("名前：%s, 年齢：%d\n", name.c_str(), age);
    }
};
Comparable *x[10];
void find_min()
{
    Comparable *min = x[0];
    for (int i = 1; i < 10; i++)
    {
        if (x[i]->LTE(min))
            min = x[i];
    }
    min->print();
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        x[i] = new Double((i - 3) * (i - 3) + 1);
    }
    find_min();
    char charArray[10] = {'j', '@', ',', '*', '+', 'e', 'd', 'c', 'b', 'a'};
    for (int i = 0; i < 10; i++)
    {
        x[i] = new Char(charArray[i]);
    }
    find_min();
    Person persons[10] = {
        Person("Ann", 33),
        Person("Bob", 25),
        Person("Chris", 35),
        Person("David", 18),
        Person("Eve", 28),
        Person("Frank", 33),
        Person("Grace", 27),
        Person("Han", 22),
        Person("Iris", 39),
        Person("Judy", 31)};

    for (int i = 0; i < 10; i++)
    {
        x[i] = &persons[i];
    }
    find_min();
}
