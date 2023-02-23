#include <iostream>
#include <memory>
using namespace std;

template <typename T>
class Array {
    std::unique_ptr<T []> array;
    int size=3;
    int cap = 100;

    public:
    Array() : array(new T[100]) {
        this->array.get()[0]  = 1;
        this->array.get()[1]  = 2;
        this->array.get()[2]  = 3;
        // this->size
    }
    Array(const Array &other) {}
    Array(int size, T val) {

    } // как пример конструктор от размера и знчения (необязтельно)


    void add_end(T val) {
        size++;
        
        array[size-1]=val;
    } // добавить в начало
    void add_begin(T val) {} // добавить в конец

    void del_begin() {} // удалить из начала
    void del_end() {} // удалить из конца

    void print() {
        for (int i = 0; i < size; i++)
        {
            cout<<array.get()[i];
            
        }
        cout<<"\n";
    } // вывести массив

    ~Array() {}
};
int main() {
    Array<int> aaa;
    aaa.print();
    aaa.add_end(4);
    aaa.print();
    return 0;
}