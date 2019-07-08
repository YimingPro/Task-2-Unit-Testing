

#include "calculator.h"
#include <stdexcept>

int calculator::add(int a, int b) {
    return a + b;
}

double calculator::add(double a, double b) {
    return a + b;
}


int calculator::substract(int a, int b) {
    return a - b;
}

double calculator::substract(double a, double b) {
    return a - b;
}


int calculator::multiply(int a, int b) {
    return a * b;
}

double calculator::multiply(double a, double b) {
    return a * b;
}

int calculator::divide(int a, int b) {
    if (b == 0) {
        throw std::logic_error("divide zero");
    }
    return a / b;
}

double calculator::divide(double a, double b) {
    if (b == 0.0) {
        throw std::logic_error("divide zero");
    }
    return a / b;
}

int calculator::square(int a) {
    return a * a;
}

double calculator::square(double a) {
    return a * a;
}