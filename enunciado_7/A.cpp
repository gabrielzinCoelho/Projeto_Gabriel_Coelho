#include <iostream>

class A{
    private:
        int A1;
        float A2;
    public:
        int getA1() const;
        float getA2() const;
        void setA1(int valor);
        void setA2(float valor);
        void MA1();
        void MA2();
        void MA3();
};

int A::getA1() const {
    return A1;
}

float A::getA2() const {
    return A2;
}

void A::setA1(int valor){
    A1 = valor;
}

void A::setA2(float valor){
    A2 = valor;
}

void A::MA1(){
    std::cout << "MA1";
}

void A::MA2(){
    std::cout << "MA2";
}

void A::MA3(){
    std::cout << "Alteração a classe A partir do clone";
}

