#include <iostream>
#include <cmath>

double derivative(double(double), double, double);

int main()
{
    std::cout << derivative([](double x){return std::exp(x) * x * x;}, 2, 0.001) << std::endl;
    std::cout << "My work is done!" << "\n";
    return 0;
}

double derivative(double f(double), double x, double h)
{
    return (f(x + h) - f(x - h)) / (2*h);
}