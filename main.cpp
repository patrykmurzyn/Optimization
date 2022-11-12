/*********************************************
Kod stanowi uzupe³nienie materia³ów do æwiczeñ
w ramach przedmiotu metody optymalizacji.
Kod udostêpniony na licencji CC BY-SA 3.0
Autor: dr in¿. £ukasz Sztangret
Katedra Informatyki Stosowanej i Modelowania
Akademia Górniczo-Hutnicza
*********************************************/

#include"opt_alg.h"

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();

int main()
{
	try
	{
        lab1();
	}
	catch (string EX_INFO)
	{
		cerr << "ERROR:\n";
		cerr << EX_INFO << endl << endl;
	}
	system("pause");
	return 0;
}

void expansionTest(double x0, double d, double alpha, int Nmax) {
    double* p = expansion(ff, x0, d, alpha, Nmax, NULL, NULL);
    cout << "Expansion Method" << endl;
    cout << "Data: x0=" << x0 << ", d=" << d << ", alpha=" << alpha << ", Nmax=" << Nmax << endl;
    cout << "Result: " << p[0] << ", " << p[1] << endl;
}

void lab1()
{
    expansionTest(100, 1, 1.1, 1000);
}

void lab2()
{

}

void lab3()
{

}

void lab4()
{

}

void lab5()
{

}

