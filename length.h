#include "complex.h"

int lengthOfString(const char *str){	
	int i = 0;
    for (i = 0; str[i] != '\0'; i++);
    
    return i;
}

void ArrayConverting(int *arr_ptr, int size){
	int i = 0, min = arr_ptr[0], max = arr_ptr[0];
	double sum = 0, disp = 0, squareDeviation = 0, tempSum = 0;
	
	for(i = 0; i < size; i++){
		sum += arr_ptr[i];

		if(arr_ptr[i] < min)
			min = arr_ptr[i];
		if(arr_ptr[i] > max)
			max = arr_ptr[i];
	} 
	
	for(i = 0; i < size; i++){
			disp += (arr_ptr[i] - sum/size) * (arr_ptr[i] - sum/size);
	}
	disp /= (size - 1);
	
	for(i = 0; i < size; i++){
		tempSum += pow(arr_ptr[i] - (sum/size), 2);
	}
	squareDeviation = sqrt(tempSum/(size - 1));
	
	printf("Average value is %lf\n", sum/size);
	printf("Minimal value is %d\n", min);
	printf("Maximal value is %d\n", max);
	printf("Dispersion value is %lf\n", disp);
	printf("Square deviation value is %lf\n", squareDeviation);
}
