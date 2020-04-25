#define _USE_MATH_DEFINES
#include "func.h"
#include "length.h"

double Surface(double R, double H){
	double s1 = 2 * M_PI * pow(R, 2);
	double s2 = 2 * M_PI * R * H;

	return s1 + s2;
}

double Cylinder(double &R, double &H){
	return pow(R, 2) * M_PI * H;
}

int main(){
	char buffer = '0';
	const char *str = "Материалы к лекции по химии от 27.03.2020";
	
	printf("Task 1-2:\n");
	printf("==== ==== ==== ==== ==== ==== ==== ====\n");
	double r, h;
	printf("Enter radius: ");
	scanf("%lf", &r);
	printf("Enter height: ");
	scanf("%lf", &h);

	double s = Surface(r, h);
	printf("Sqare = %lf\n", s);

	double volume = Cylinder(r, h);
	printf("Volume of cylinder = %lf\n", volume);

	printf("==== ==== ==== ==== ==== ==== ==== ====\n");
	cin >> buffer;//system("pause") analog
	
	printf("Task 3:\n");
	printf("==== ==== ==== ==== ==== ==== ==== ====\n");
	
	MyComplex *complex1 = new MyComplex;
	printf("Enter 1st complex variable:\n");
	getComplexStruct(complex1);
	MyComplex *complex2 = new MyComplex;
	printf("Enter 2nd complex variable:\n");
	getComplexStruct(complex2);
	
	printf("The module of 1st = %lf\n", MyComplexModule(complex1->real, complex1->imagine));
	printf("The module of 2nd = %lf\n", MyComplexModule(complex2->real, complex2->imagine));
	PrintComplexSum(complex1->real, complex1->imagine, complex2->real, complex2->imagine);
	
	printf("==== ==== ==== ==== ==== ==== ==== ====\n");
	cin >> buffer;
	
	printf("Task 4:\n");
	printf("==== ==== ==== ==== ==== ==== ==== ====\n");
	
	printf("Length of string = %d bytes\n", lengthOfString(str));
	int size_arr = 0;
	printf("Enter size of array: ");
	scanf("%d", &size_arr);
	int arr[size_arr];
	int *ptr = arr;
	for(int i = 0; i < size_arr; i++){
		printf("Enter %d element: ", i);
		scanf("%d", &arr[i]);
	} 
	ArrayConverting(ptr, size_arr);
	
	printf("==== ==== ==== ==== ==== ==== ==== ====\n");
	cin >> buffer;

	delete complex1;
	delete complex2;
	return EXIT_SUCCESS;
}
