#include <iostream>

class B{
    private: 
        int B1;
        float B2;
    public:
        int getB1() const;
        float getB2() const;
        void setB1(int valor);
        void setB2(float valor);
        void MB1();
        void MB2();
};

int B::getB1() const {
    return B1;
}

float B::getB2() const {
    return B2;
}

void B::setB1(int valor){
    B1 = valor;
}

void B::setB2(float valor){
    B2 = valor;
}

void B::MB1(){
    std::cout << "MB1";
}

void B::MB2(){
    std::cout << "MB2";
}