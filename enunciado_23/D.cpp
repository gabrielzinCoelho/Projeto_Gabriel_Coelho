#include <iostream>

class D{
    private:
        int D1, D2;
    public:
        void MD1(){};
        void MD2(){};
        void MD3();
        void MD4();
};

void D::MD3(){
    std::cout << "MD3";
}


void D::MD4(){
    std::cout << "MD4";
}
