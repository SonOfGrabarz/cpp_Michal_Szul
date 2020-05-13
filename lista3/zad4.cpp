#include <iostream>

int main()
{
    double tab[10];
    double x;

    std::cout << &x << "\t" << &tab[-1] << "\n";

    // po podaniu do tablicy argumentu z poza jej zakresu otrzymalismy
    // adres zmiennej x

    return 0;
}
