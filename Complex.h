#pragma once
#include <iostream>
using namespace std;

class Complex{
    private: 
        double r;
        double im;
    public:
        void setR(double);
        void setIm(double);
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        Complex operator/(Complex);
        Complex operator=(Complex);
        bool operator==(Complex);
        friend ostream& operator<<(ostream& out, Complex);
        void reset();
        double getR();
        double getIm();
        Complex(void);
        Complex(double, double);
        ~Complex(void);
};