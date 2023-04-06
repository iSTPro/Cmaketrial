#include <stdexcept>

class MyMathClass {
public:
    int add(int x, int y) {
        return x + y;
    }

    int subtract(int x, int y) {
        return x - y;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    int divide(int x, int y) {
        if (y == 0) {
            throw std::invalid_argument("Cannot divide by zero.");
        }
        return x / y;
    }
};

extern "C" {
    __declspec(dllexport) MyMathClass* CreateMyMathClass() {
        return new MyMathClass();
    }

    __declspec(dllexport) void DestroyMyMathClass(MyMathClass* math) {
        delete math;
    }
}
