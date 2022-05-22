/*
Ejemplos de Valores y Operaciones de Tipos de Datos utilizando assert
Bianca Amorim
Última actualización: 22/05/2022
*/

#include <cassert>
#include <string>

using namespace std::string_literals;

int main()
{
    // int
    assert(52 != 25 + 32);
    assert(16 - 4 == 12);
    assert(35 == 105 / 3);

    // unsigned
    assert(27u == 3u * 9u);
    assert(201u > 752u / 4u);
    assert(999u or 222u == 222u);

    // bool
    assert((true and false) == false);
    assert(false or not false);
    assert(((true and true) or (true and false)) != not true);

    // double
    assert(5.8 - 5.4 != 0.5);
    assert(3E2 == 3 * 10 * 10);
    assert(3.14159 > 3e-9);

    // "char"
    assert('a' < 'z');
    assert('C' - 2 == 65 and 'C' - 2 == 'A');
    assert('d' + 'q' == 0xD5);

    // string
    assert("git"s + "hub"s == "github"s);
    assert("github"s.length() <= 6);
    assert("Estudio"s + "sin practica"s != "exito"s);
}
