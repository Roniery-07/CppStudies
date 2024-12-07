#include <iostream>
#include <string.h>
#include <vector>
#include <cmath>

class Pessoa
{
protected:
    int idade;
    std::string nome;

public:
    Pessoa() : idade(0), nome("Desconhecido") {};
    Pessoa(std::string n, int i) : idade(i), nome(n) {};

    void mostrarInfo()
    {
        std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
    }

    std::string getNome()
    {
        return nome;
    }

    void setNome(std::string novoNome)
    {
        nome = novoNome;
    }
};

class Estudante : public Pessoa
{
private:
    int id;
    std::string curso;

public:
    Estudante() : Pessoa(), id(0), curso("Indefinido") {};
    Estudante(std::string n, int i, int id, std::string c) : Pessoa(n, i), id(id), curso(c) {};

    void mostrarInfo()
    {
        std::cout << "Nome: " << nome << ", Idade: " << idade << ", Id: " << id << "Curso: " << curso << std::endl;
    }

    void mudarNome(std::string novoNome)
    {
        this->nome = novoNome;
    }
    void mudarId(int novoId)
    {
        id = novoId;
    }
};

class Professor : public Pessoa
{
private:
    std::string disciplina;

public:
    Professor() : Pessoa(), disciplina("Indefinido") {};
    Professor(std::string n, int i, std::string d) : Pessoa(n, i), disciplina(d) {};

    void mostrarInfo()
    {
        std::cout << "Nome: " << nome << ", Idade: " << idade << ", Curso: " << disciplina << std::endl;
    };
};

class Turma
{
private:
    std::string nomeTurma;
    std::vector<Estudante> estudades;
    std::vector<Professor> professores;

public:
    Turma() : nomeTurma("Indefinido") {};
    Turma(std::string n) : nomeTurma(n) {};

    void addEstudades(Estudante &e)
    {
        estudades.push_back(e);
    }
};

// Classe abstrata

class Ave
{
public:
    virtual void bicar() = 0;
};

class AveVoadora : public Ave
{
public:
    virtual void voar() = 0;
};

class Gaviao : public AveVoadora
{
private:
    std::string raca;

public:
    Gaviao(std::string r) : raca(r) {};
    void bicar() override
    {
        std::cout << "Gaviao bicou!" << "\n";
    }
    void voar() override
    {
        std::cout << "Gaviao voou" << "\n";
    }
};

class Pinguim : public AveVoadora
{
private:
    std::string nome;

public:
    Pinguim(std::string n) : nome(n) {};
    void bicar() override
    {
        std::cout << "Pinguim bicou!" << "\n";
    }
    void voar() override
    {
        std::cout << "Pinguim não voa" << "\n";
    }
};

// classe estática

class Calculadora
{
public:
    static int somar(int i1, int i2)
    {
        return i1 + i2;
    }
    static double power(double r, double e)
    {
        return pow(r, e);
    }
};

int main()
{
    /*
    int var1 = 5;
    int *p1 = &var1;
    int *p2 = nullptr;

    std::cout << p2 << std::endl;
    std::cout << "valor: " << *p2 << std::endl;

    std::string name = "Roniery";
    std::cout << "Ola mundo! " << name << " aqui!";
    */

    // Pessoa p;
    // Turma turma1("Matemática");

    // p.mostrarInfo();

    // Pessoa p1("Ana", 42);
    // p1.mostrarInfo();

    // Estudante e1("Ednaldo", 31, 11111, "Automação");
    // e1.mostrarInfo();

    // turma1.addEstudades(e1);
    // e1.mostrarInfo();

    // Gaviao g("Americano");
    // Pinguim p("Kadu");
    // g.bicar();
    // g.voar();
    // p.bicar();
    // p.voar();

    // std::cout << Calculadora::somar(1, 3) << "\n";
    // std::cout << Calculadora::power(2, 3) << "\n";

    Pessoa *p = new Pessoa("Roniery", 18);
    Pessoa p1("Carlos", 21);

    p->mostrarInfo();

    p->setNome("Marina");
    std::cout << p->getNome() << "\n";

    p->mostrarInfo();

    std::cout << "\n";

    p1.mostrarInfo();

    p1.setNome("Marcelo");
    p1.mostrarInfo();
    return 0;
}
