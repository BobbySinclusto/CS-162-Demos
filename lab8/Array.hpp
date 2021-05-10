#include <iostream>

using namespace std;

template <class T>
class Array {
private:
    T *arr;
    int size;
public:
    Array(int);
    ~Array();
    T* get_arr();
    void print();
};

template <class T>
Array<T>::Array(int size) {
    this->size = size;
    arr = new T[size];
}

template <class T>
Array<T>::~Array() {
    delete [] arr;
}

template <class T>
T* Array<T>::get_arr() {
    return arr;
}

template <class T>
void Array<T>::print() {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
