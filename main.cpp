#include <iostream>

double derivative(double(double), double, double);

int main()
{
    std::cout << derivative([](double x){return x * x;}, 2, 0.001) << std::endl;
    return 0;
}

double derivative(double f(double), double x, double h)
{
    return (f(x + h) - f(x - h)) / (2*h);
}