#include <iostream>
#include "calculator.hpp"

using namespace std;
//Comentario
double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0.0) {
        throw invalid_argument("Division by zero");
    }
    return a / b;
}
