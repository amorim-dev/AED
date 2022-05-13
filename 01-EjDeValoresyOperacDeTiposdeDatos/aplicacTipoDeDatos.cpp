/*
Ejemplos de Valores y Operaciones de Tipos de Datos utilizando assert
Bianca Amorim
Última actualización: 12/05/2022
*/

#include <iostream>
#include <cassert>

int main()
{
    // int or unsigned
    assert(52 != 25 + 32);
    assert(16 - 4 == 12);
    // bool
    assert((true and false) == false);
    assert(false or true);
    // double
    assert(2.5 == 5.0 / 2.0);
    assert(5.8 - 5.4 != 0.5);
    // char
    assert('b' != 'f');
    assert('a' < 'z');
    // string
    assert('Bia' < 'Lia');
    assert('git' + 'hub' != 'github');
}
