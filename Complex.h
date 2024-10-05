#include <iostream>
using namespace std;
class Complex{
  private:
    float real;
    float imaginary;
  public:
    Complex(){
      // To DO
      real = 0;
      imaginary = 0;
    }
    Complex(float r, float i){
      // To DO
      real = r;
      imaginary = i;
    }
    Complex operator+(Complex rhs){
      // To DO
      Complex sum;
      sum.real = real+rhs.real;
      sum.imaginary = imaginary+rhs.imaginary;
      return sum;
    }
    Complex operator-(Complex rhs){
      // To DO
      Complex difference;
      difference.real = real-rhs.real;
      difference.imaginary = imaginary-rhs.imaginary;
      return difference;
    }
    Complex operator*(const Complex& other) const {
      // To DO
      Complex product;
      product.real = (real*other.real)-(imaginary*other.imaginary);
      product.imaginary = (real*other.imaginary)+(imaginary*other.real);
      return product;
    }
    Complex operator/(const Complex& other) const {
      // To DO
      Complex quotient;
      quotient.real = ( (real*other.real)+(imaginary*other.imaginary) ) / ( (other.real*other.real)+(other.imaginary*other.imaginary) );
      quotient.imaginary = ( (imaginary*other.real)-(real*other.imaginary) ) / ( (other.real*other.real)+(other.imaginary*other.imaginary) );
      return quotient; 
    }
    Complex conjugate() {
      // To DO
      Complex theConjugate;
      theConjugate.real = real;
      theConjugate.imaginary = -(imaginary);
      return theConjugate;
    }
    float real_getter() {
      return real;
    }
    float imagine_getter() {
      return imaginary;
    }
};