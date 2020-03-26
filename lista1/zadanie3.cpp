#include <iostream>
#include <cmath>

double a(int i)
{
    if( i == 0 )
    {
        return (1 / sqrt(3));
    }

    else
    {
        return ( ((sqrt(pow(a(i - 1), 2) + 1)) - 1) / ( a(i - 1) ));
    }
}

double b(int i)
{
    if( i == 0 )
    {
        return (1 / sqrt(3));
    }

    else
    {
        return ( b(i - 1) / ( sqrt(pow(b(i - 1),2) + 1) + 1));
    }
}

int main()
{
    double wynik1;
    double wynik2;

    for( int i = 0; i <= 30; i++)
    {
        wynik1 = 6 * pow(2,i) * a(i);
        wynik2 = 6 * pow(2,i) * b(i);

        std::cout << "Dla i = " << i << " a) " << wynik1 << " b) " << wynik2 << std::endl;
    }

    return 0;
}

