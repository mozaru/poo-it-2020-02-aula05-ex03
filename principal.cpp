#include <iostream>
#include <math.h>

using namespace std;

#define _MAX_ 100

class TTermo
{
    private:
	float coef;
	int   exp;
    public:
	void ler();
	float calcular(float x);
};

class TPolinomio
{
   private:
   	TTermo v[_MAX_];
   	int qtd;
   public:
	void ler();
	float calcular(float x);
};

void TTermo::ler()
{
   cout << "Coef:";	cin >> coef;
   cout << "Exp:";	cin >> exp; 
}
float TTermo::calcular(float x)
{
   return coef*pow(x,exp);
}
void TPolinomio::ler()
{
    cout << "Entre com a quantidade de termos:";
    cin >> qtd;
    for(int i=0; i<qtd; i++)
    {
	cout << "termo "<< i+1 << " de " << qtd << endl;
        v[i].ler();
    }      
}
float TPolinomio::calcular(float x)
{
    float soma = 0;
    for(int i=0; i<qtd; i++)
        soma = soma + v[i].calcular(x);
    return soma;
}

int main()
{
	TPolinomio p;
	float x;
	p.ler();
        cout << "entre com o valor de x:";
	cin >> x;
	cout << "p(" << x << ") = " << p.calcular(x) << endl;
	return 0;
}
