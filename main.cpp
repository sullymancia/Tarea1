#include "Test.h"
#include <iostream>
using namespace std;
//Buscar si x esta en el vector ordered_numbers
//Optimizarlo en un tiempo logaritmico
bool numberSearch(vector<int> ordered_numbers, int numero, int inicio, int fin)
{
    if(fin < inicio || inicio > fin)

        return false;

    int pos = (fin - inicio) / 2;

    if(ordered_numbers[pos] == numero)

        return true;

    else
        if(numero > ordered_numbers[pos])

        return numberSearch(ordered_numbers, numero, pos + 1, fin);

    else
        if(numero < ordered_numbers[pos])
        return numberSearch(ordered_numbers, numero, inicio, pos - 1);

}

bool numberExists(vector<int> ordered_numbers, int x)
{
    if(!ordered_numbers.size()){

        return false;
}
    return numberSearch(ordered_numbers, x, 0, ordered_numbers.size() - 1);
}

int main ()
{
    test();
    return 0;
}
