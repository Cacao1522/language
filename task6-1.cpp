#include <stdio.h>
class Object
{
protected:
    int size;
    int *array;

public:
    Object(int _size)
    {
        size = _size;
        array = new int[size];
        for (int i = 0; i < size; i++)
            array[i] = 0;
    }
    ~Object()
    {
        delete[] array;
        printf("destructor called¥n");
    }
    void print_array()
    {
        for (int i = 0; i < size; i++)
            printf("%d: %d¥n", i, array[i]);
    }
};
class Rectangle : public Object
{
public:
    void set(int[] array)
    {
    }
    int sum()
    {
    }
} class Circle : public Object
{
public:
    void set(int[] array)
    {
    }
    int sum()
    {
    }
} int main()
{
    Rectangle a(4);
    a.print_array();
}