#include <stdio.h>
struct Person
{
    char *name;
    int age;
};
void setName(struct Person *person, char *_name)
{
    person->name = _name;
}
void setAge(struct Person *person, int _age)
{
    person->age = _age;
}
void printName(struct Person *person)
{
    printf("%s\n", person->name);
}
void printAge(struct Person *person)
{
    printf("%d\n", person->age);
}
int main(void)
{
    struct Person person[2];
    setName(&person[0], "Taro");
    setAge(&person[0], 21);
    setName(&person[1], "Hanako");
    setAge(&person[1], 20);
    for (int i = 0; i < 2; i++)
    {
        printName(&person[i]);
        printAge(&person[i]);
    }
}
