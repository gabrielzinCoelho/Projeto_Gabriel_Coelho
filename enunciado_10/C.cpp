#include <iostream>

class C{
    private:
        std::string C1;
        int C2;
    public:
        void MC1();
        void MC2();
        void MC3();
};

void C::MC1(){
    std::cout << "MC1";
}

void C::MC2(){
    std::cout << "MC2";
}

void C::MC3(){
    std::cout << "MC3";
}