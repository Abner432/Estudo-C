#include <string>
#include "fibonacci.hpp"
using namespace std;

string fibonacci(int N)
{
    string a = "a", b = "b"; //declara as strings a="a" e b="b"
    if (N == 0)              //confere se N e iguala a 0
    {
        return b; //retorna b
    }
    if (N == 1) //confere se N e igual a 1
    {
        return a; //retorna a
    }
    if (N > 1) //confere se N e maior que 1
    {
        return fibonacci(N - 1) + fibonacci(N - 2); //retorna a operacao descrita por recursividade
    }
}
