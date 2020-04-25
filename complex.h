#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

struct MyComplex{
	double real, imagine;
};

void getComplexStruct(MyComplex *obj){
	printf("Enter the real value: ");
	scanf("%lf", &obj->real);
	printf("Enter the imagine value: ");
	scanf("%lf", &obj->imagine);
}

double MyComplexModule(double real, double imagine){
	return sqrt(pow(real, 2) + pow(imagine, 2));
}

double RealSum(double real1, double real2){
	return real1 + real2;
}

double ImagineSum(double imag1, double imag2){
	return imag1 + imag2;
}

void PrintComplex(double real, double imag){
	printf("%lf + %lfi\n", real, imag);
}

void PrintComplexSum(double real1, double image1, double real2, double imag2){
	printf("Sum of two complex variables: %lf + %lfi\n", real1 + real2, image1 + imag2);
}
