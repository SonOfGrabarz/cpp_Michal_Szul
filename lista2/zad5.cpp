#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

int fibo1(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (fibo1(n-1) + fibo1(n-2));
}

int fibo2(int n)
{
    float f = ( 1.0 / sqrt(5.0) ) * ( pow( (2.0/(sqrt(5.0) - 1.0)), (double)(n) ) - pow( (-2.0/(sqrt(5.0) + 1.0)), (double)(n) ));
    return f;
}

// nie wiedziałem jak zrobić
// więc prosiłbym o wytłumaczenie

//int fibo3(int n)
//{

//}

int main()
{
    clock_t f1 = clock();

    for(int i = 0; i <= 48; i++)
    {
        std::cout << "F(" << i << ") = " << fibo1(i) << std::endl;

    }

    clock_t t1 = clock() - f1;
    std::cout << "Czas wykonania funkcji fibo1 wynosi: " << t1 << " sekund." << std::endl;


    clock_t f2 = clock();

    for(int j = 0; j <= 48; j++)
    {
        std::cout << "F(" << j << ") = " << fibo1(j) << std::endl;

    }

    clock_t t2 = clock() - f2;
    std::cout << "Czas wykonania funkcji fibo2 wynosi: " << t2 << " sekund." << std::endl;

}
