#include <iostream>

using namespace std;

template <typename Type>
class Vector
{
private:
    int cap;
    int cur_size;
    Type* arr;
    Type* _begin;
    Type* _end;

public:
    Vector();
    ~Vector();
    void push_back(Type);
    void push_front(Type);
    void pop_back();
    void pop_front();
    bool empty();
    int size();
    int capacity();
    void clear();
    Type* begin();
    Type* end();
    Type front();
    Type back();
    Type& operator[](int);
};

template <typename Type>
Vector<Type> :: Vector()
{
    cap = 0;
    cur_size = 0;
    _begin = nullptr;
    _end = nullptr;
}

template <typename Type>
Vector<Type> :: ~Vector()
{
    cap = 0;
    cur_size = 0;
    clear();
    _begin = nullptr;
    _end = nullptr;
}

template <typename Type>
bool Vector<Type> :: empty()
{
    return cur_size == 0;
}

template <typename Type>
int Vector<Type> :: size()
{
    return cur_size;
}

template <typename Type>
int Vector<Type> :: capacity()
{
    return cap;
}

template <typename Type>
Type* Vector<Type> :: begin()
{
    return _begin;
}

template <typename Type>
Type* Vector<Type> :: end()
{
    return _end;
}

template <typename Type>
Type Vector<Type> :: front()
{
    return *_begin;
}

template <typename Type>
Type Vector<Type> :: back()
{
    return *_end;
}

template <typename Type>
void Vector<Type> :: push_back(Type value)
{
    if(cap == 0)
    {
        arr = new Type[cap];
        arr[0] = value;
        cur_size++;
        cap = 1;
        _begin = &arr[0];
        _end = &arr[0];
    }
    else if(cur_size < cap)
    {
        arr[cur_size] = value;
        _end = &arr[cur_size];
        cur_size++;
    }
    else
    {
        Type* tmp = arr;
        cap = cap * 2;
        arr = new Type[cap];
        for(int i = 0; i < cur_size; i++)
        {
            arr[i] = tmp[i];
        }
        arr[cur_size] = value;
        _begin = &arr[0];
        _end = &arr[cur_size];
        cur_size++;
        delete []tmp;
    }
}

template <typename Type>
void Vector<Type> :: pop_back()
{
    if(cur_size == 0)
        return;
    if(cur_size == 1)
    {
        cur_size--;
        _begin = nullptr;
        _end = nullptr;
    }
    else
    {
        cur_size--;
        _end = &arr[cur_size - 1];
    }
}

template <typename Type>
void Vector<Type> :: push_front(Type value)
{
    if(cap == 0)
    {
        arr = new Type[1];
        arr[0] = value;
        cur_size++;
        cap = 1;
        _begin = &arr[0];
        _end = &arr[0];
    }
    else if(cur_size < cap)
    {
        for(int i = cur_size - 1; i >= 0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = value;
        cur_size++;
    }
    else
    {
        Type* tmp = arr;
        cap = cap * 2;
        arr = new Type[cap];
        for(int i = 0; i < cur_size; i++)
        {
            arr[i] = tmp[i];
        }
        for(int i = cur_size - 1; i >= 0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = value;
        cur_size++;
    }
}

template <typename Type>
void Vector<Type> :: pop_front()
{
    if(cur_size == 0)
        return;
    if(cur_size == 1)
        pop_back();
    else
    {
        for(int i = 1; i < cur_size; i++)
        {
            arr[i - 1] = arr[i];
        }
        cur_size--;
        _end = &arr[cur_size - 1];
    }
}

template <typename Type>
void Vector<Type> :: clear()
{
    while(!empty())
        pop_back();
}

template <typename Type>
Type& Vector<Type> :: operator[](int idx)
{
    if(!(0 <= idx && idx <= cur_size - 1))
    {
        exit(69);
    }
    return arr[idx];
}
