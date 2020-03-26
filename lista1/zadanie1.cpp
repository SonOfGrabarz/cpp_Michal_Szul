#include <iostream>

void obliczSilnie(int max)
{
    int silnia = 1;

    for( int n = 0; n <= max; n++)
    {
        for(int i = 1; i <= n; i++)
        {
            silnia = silnia * i;
        }

        std::cout << "Silnia liczby: " << n << " (n!) wynosi: " << silnia << std::endl;

        silnia = 1;
    }

}

int main()
{
    obliczSilnie(40);
    return 0;
}

// przy dalszych wynikach pojawiają się błędne wyniki ponieważ
// zmienna int ma ograniczoną ilość pamięci
// i większych liczb w tej zmiennej nie da rady przechowywać
