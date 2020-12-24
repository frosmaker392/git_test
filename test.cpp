#include <iostream>

class TestObject
{
private:
    int a, b;
public:
    TestObject(int a, int b);
    double Divide();
};

TestObject::TestObject(int a1, int b1)
{
    a = a1;
    b = b1;

    std::cout << "TestObject : " << a + b << std::endl;
}

double TestObject::Divide(){
    return (double) a / b;
}

int main(){
    int a,b;
    int c;
    std::cout << "Enter a : ";
    std::cin >> a;
    std::cout << "Enter b : ";
    std::cin >> b;
    
    TestObject t(a, b);
    double d = t.Divide();

    std::cout << "Divide result : " << d << std::endl;
}