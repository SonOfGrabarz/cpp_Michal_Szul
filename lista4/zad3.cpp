#include <iostream>
#include "random.h"


// f(n+1) = 16807 fn mod(2^31 - 1)
// 0 < f1 < 2^31 - 1

int main()
{
    const int N = 100;
    std::vector<double> vec(N);

    Random rand;

    for(int i = 0; i  < N; i++)
    {
        vec[i] = rand();

    }

    return 0;
}
