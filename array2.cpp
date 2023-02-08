#include <string>
#include <iostream>
using namespace std;
class Calc {


public:
    

    virtual void plus(int a, int b) {
        cout<<(a+b)<<"\n";
    }

    virtual void minus(int a, int b) {
        cout<<(a-b)<<"\n";
    }

    // ~Calc() {}

};

class SuperCalc : public Calc {

 public:
    void mult(int a, int b) { // умножение
        cout<<(a*b)<<"\n";
    }

    void div(int a, int b) { // деление
        cout<<(a/b)<<"\n";
    }

};

class SaveCalc : public Calc { // сохраняет последнюю операцуию

    

    private:
    std::string last_operation; // последняя выполненая операция

    public:
    void plus(int a, int b) {
        cout<<(a+b)<<"\n";
        this->last_operation=a+b;
    }

    void minus(int a, int b) {
        cout<<(a-b)<<"\n";
        this->last_operation=a-b;
    }
    std::string getLastOperation() {
        return this->last_operation;
        
    }

    // void plus() {...}
    // void minus() {...}

    // ~SaveCalc() {}

};

int main() {
    Calc def_calc;
    SuperCalc super_calc;
    SaveCalc save_calc;

    def_calc.minus(100, 50);
    def_calc.plus(5, 7);

    super_calc.minus(10, 8);
    super_calc.minus(50, 10);
    super_calc.mult(7, 11);
    super_calc.div(512, 16);

    save_calc.minus(77, 8);
    save_calc.plus(8, 60);
    std::cout << save_calc.getLastOperation() << "\n";

}