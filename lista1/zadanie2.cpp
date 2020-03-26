#include <iostream>
#include <cmath>

double a(int n)
{
    std::cout << "Podpunkt a) " << std::endl;

    double wynik1 = 0.0;

    for( int j = 1; j <= n; j++)
    {
        double potega = j + 1.0;
        wynik1 += (pow(-1.0,potega))/(2.0*j - 1.0);
    }

    return 4.0 * wynik1;
}

double b(int n)
{
    std::cout << "Podpunkt b) " << std::endl;

    double wynik2 = 1.0;

    for( int j = 1; j <= n; j++)
    {
        wynik2 *= ( 4 * pow(j, 2)) / ( 4 * pow(j, 2) - 1);
    }

    return 2.0 * wynik2;
}

double c(int n)
{
    std::cout << "Podpunkt c) " << std::endl;

    double wynik3 = 0.0;

    for( int j = 1; j <= n; j++)
    {
        double mianownik = 2 * j - 1;
        wynik3 += 1 / (pow(mianownik, 2));
    }

    return sqrt(8 * wynik3);
}


int main()
{
    const int n = 10000000;

    std::cout << "Liczba pi wynosi: " << M_PI << std::endl;
    std::cout << std::endl;
    std::cout << a(n) << std::endl;
    std::cout << std::endl;
    std::cout << b(n) << std::endl;
    std::cout << std::endl;
    std::cout << c(n) << std::endl;

    return 0;
}
