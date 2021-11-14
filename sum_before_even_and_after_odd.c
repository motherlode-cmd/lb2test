
#if !defined(ABS) 
#define ABS <stdlib.h>
#include ABS
#endif 
#if !defined(FALL) 
#define FALL "all_funk.h"
#include FALL
#endif 
int f3(int m[], int size) {
	int sum = 0;
	for(int i = f0(m, size) - 1; i >= 0; i--) {
		sum += abs(m[i]);
	}
	for(int i = f1(m, size); i < size; i++) {
		sum += abs(m[i]);
	}
	return sum;
}