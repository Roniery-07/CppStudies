#include <iostream>
#include <string>

class Pessoa
{
private:
    int idade;
    std::string nome;

public:
    Pessoa(int i, std::string n) : idade(i), nome(n)
    {
        std::cout << "Pessoa Criada!\n";
    }
};

void func()
{
    Pessoa *p = new Pessoa(21, "Ana");
}

int main()
{
    // int x = 10;
    // int *ptr = &x;
    // int &ref = x; // essa é a referência, ela n pode ser declarada e só depois ser inicializada, ela precisa ser inicializada
    //               // imediatamente.

    // int *ptr1 = new int(1);

    // std::cout << "&x: " << &x << "\n";
    // std::cout << "ptr: " << ptr << "\n";
    // std::cout << "*ptr: " << *ptr << "\n";
    // std::cout << "&ptr: " << &ptr << "\n";
    // std::cout << "ref: " << ref << "\n";
    // std::cout << "ptr1: " << ptr1 << "\n";
    // std::cout << "&ptr1: " << &ptr1 << "\n";
    // std::cout << "*ptr1: " << *ptr1 << "\n";

    const char arrayDeChar[5] = {'a', 'b', 'c', 'd', 'e'};
    const char arrayDeChar2[5] = {'e', 'f', 'g', 'h', 'i'};
    const char *ptr = &arrayDeChar[0];

    std::cout << *ptr << std::endl;
    ptr = ptr + 1;
    std::cout << *ptr << std::endl;
    std::cout << &arrayDeChar << std::endl;
    return 0;
}