#include <iostream>
#include <chrono>

int main()
{
    unsigned N = 309999;

    std::chrono::time_point<std::chrono::system_clock> start1, end1, start2, end2;
    start1 = std::chrono::system_clock::now();

    for (unsigned n = 1; n <= N; ++n)
    {
        int*p = new int[n];
        delete [] p;
    }

    end1 = std::chrono::system_clock::now();
    std::chrono::duration<double> timeInSec1 = end1 - start1;
    std::cout << "1.Czas wykonania: " << timeInSec1.count() << "\n";

    // --------------- //

    long long N1 = 700000000;

    start2 = std::chrono::system_clock::now();

    for (long long n1 = 0; n1 <= N1; ++n1)
    {
        n1 = n1 + 1;
    }

    end2 = std::chrono::system_clock::now();
    std::chrono::duration<double> timeInSec2 = end2 - start2;
    std::cout << "2.Czas wykonania: " << timeInSec2.count() << "\n";


    return 0;
}
