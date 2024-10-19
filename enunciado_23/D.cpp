#include <iostream>

class D{
    private:
        int D1, D2;
    public:
        void MD1(){};
        void MD2(){};
        void MD4();
};

void D::MD4(){
    std::cout << "MD4";
}
