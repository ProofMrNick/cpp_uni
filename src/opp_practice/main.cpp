
#include <iostream>


class Dog {
    public:
        std::string name;
        int age;
        
        void bark(int times) {
            for (int i = 0; i < times; i++) {
                std::cout << "woof! ";
            }
        }
        
        Dog(std::string name, int age) {
            this->name = name;
            this->age = age;
        }
};


int main() {
    
    Dog dog1("Cupcake", 8);
    dog1.bark(4);
    
    return 0;
}