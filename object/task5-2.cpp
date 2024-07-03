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
        printf("destructor called\n");
    }
    void print_array()
    {
        for (int i = 0; i < size; i++)
            printf("%d: %d\n", i, array[i]);
    }
};
class SumArray : public IntArray
{
public:
    SumArray(int _size) : IntArray(_size) {}
    void set(int *array_)
    {
        for (int i = 0; i < size; i++)
        {
            array[i] = array_[i];
        }
    }
    int sum()
    {
        int val = 0;
        for (int i = 0; i < size; i++)
        {
            val += array[i];
        }
        return val;
    }
};
int main()
{
    SumArray b(4);
    int array[5] = {1, 2, 3, 4, 5};
    b.set(array);
    b.print_array();
    printf("合計: %d\n", b.sum());
}