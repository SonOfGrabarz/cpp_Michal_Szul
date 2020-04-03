#include <iostream>


// wywołując funkcję silnia z argumentem -1
// w momencie w którym funckja silnia jest typu
// unsigned powoduje błąd i przypisywana jest
// jej maksymalna wartość obsługiwana (przez ten typ)

unsigned silnia(unsigned n)
{
    if (n == 0)
        return 1;
    else
        return n * silnia(n-1);

}

int main()
{
    for(int i = 0; i < 5; ++i)
        std:: cout << i << "! = " << silnia(i) << "\n";
}
