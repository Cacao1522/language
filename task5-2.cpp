#include <stdio.h>
class IntArray
{
protected:
    int size;
    int *array;

public:
    IntArray(int _size)
    {
        size = _size;
        array = new int[size];
        for (int i = 0; i < size; i++)
            array[i] = 0;
    }
    ~IntArray()
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
class SumArray : public IntArray
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
    IntArray a(4);
    a.print_array();
}