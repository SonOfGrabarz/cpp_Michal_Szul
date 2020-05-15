#ifndef RANDOM_H
#define RANDOM_H
#include <ctime>
#include <math.h>
#include <cassert>
#include <vector>


class random
{
private:
    int _fn;
    long long max = (pow(2, 31) - 1);
public:
    random(int f1 = time(0));
    double operator()();            // bezargumentowy operator ()
};

#endif // RANDOM_H
