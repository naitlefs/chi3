#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>

using namespace std;

fstream in("out.dat");

double* func(double* vect_in)
{
	double *vect_out = new double[4];
	


	return vect_out;
}

int main()
{
	int z;
	in >> z;
	cout << z << endl;
	for (int j = 1; j <= z; j++)
	{
		double *vect_in = new double[8];
		double *vect_out = new double[4];
		for (int i = 0; i <= 7; i++)
		{
			in >> vect_in[i];
		}

		vect_out = func(vect_in);

		for (int i = 0; i <= 7; i++)
		{
			cout << "  " << vect_in[i];
		}
		cout << endl;
	}
	system("pause");
}