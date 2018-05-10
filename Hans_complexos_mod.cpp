#include <iostream>
#include <math.h>
using namespace std;

class Complex{
private:

    float r;
    float i;

public:

    Complex(float c, float d){
        r = c;
        i = d;
    };

    Complex Conjug(){
        return Complex(r, -i);
    };


    float Mod(){
        return sqrt(r*r + i*i);
    };

    Complex Diferenca(Complex z){
        return Complex(r - z.r, i - z.i);
    }


    Complex Soma(Complex z){
        return Complex\(r + z.r, i + z.i);
    }


    Complex Divisao(Complex z){
        return Complex((this->r * z.r  +  this->i * z.i)/(z.r*z.r + z.i*z.i) , (-this->r * z.i  +  this->i * z.r)/(z.r*z.r + z.i*z.i
));
    }

    Complex Multiplicacao(Complex z ){
               return Complex((r*z.r + i*z.i)/(z.r*z.r + z.i*z.i),(i*z.r - r*z.i)/(z.r*z.r + z.i*z.i));
    }
    void imprimeComplex(){
        cout << r << " + " << i<< "i" ;
    }
};
int main()
{
    float a,b;
    cout << "insira a parte real:";
    cin >>a;
    cout << "insira a parte imaginaria:";
    cin >>b;
    cout << "o numero complexo eh"<< endl;
    Complex x(a,b);
    x.imprimeComplex();
    return 0;
}
