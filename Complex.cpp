#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex(void){

}

Complex::Complex(double r, double im){
    this -> r = r;
    this -> im = im;
}

Complex::~Complex(void){

}

void Complex::setR(double r){
    this -> r = r;
}

void Complex::setIm(double im){
    this -> im = im;
}

Complex Complex::operator+(Complex N){
    Complex temp;
    temp.r = r + N.r;
    temp.im = im + N.im;
    return temp;
}

Complex Complex::operator-(Complex N){
    Complex temp;
    temp.r = r - N.r;
    temp.im = im - N.im;
    return temp;
}

Complex Complex::operator*(Complex N){
    Complex temp;
    temp.r = r * N.r - im * N.im;
    temp.im = im * N.r + r * N.im;
    return temp;
}

Complex Complex::operator/(Complex N){
    Complex temp;
    temp.r = (r * N.r + im * N.im) / (pow(N.r, 2) + pow(N.im, 2));
    temp.im = (im * N.r - r * N.im) / (pow(N.r, 2) + pow(N.im, 2));
    temp.r = (round(temp.r * 100) / 100);
    temp.im = (round(temp.im * 100) / 100);
    return temp;
}

Complex Complex::operator=(Complex N){
    r = N.r;
    im = N.im;
    return *this;
}

bool Complex::operator==(Complex N){
    if (r == N.r && im == N.im) return true;
    else return false;
}

ostream& operator<<(ostream &out, Complex N){
    if (!(N.r == 0 && N.im == 0)){
        if (N.r != 0){
            if (N.r > 0) out << N.r;
            else out << "- " << abs(N.r);
            if (N.im > 0) out << " + ";
            if (N.im < 0) out << " - ";
        }
        else if (N.im < 0) out << "- ";
        if (N.im != 0) out << abs(N.im) << "i\n";
        else out << endl;
    }
    else cout << 0 << endl;
    return out;
}

void Complex::reset(){
    r = 0;
    im = 0;
}

double Complex::getR(){
    return r;
}

double Complex::getIm(){
    return im;
}