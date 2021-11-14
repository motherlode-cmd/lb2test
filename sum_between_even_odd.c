#if !defined(ABS) 
#define ABS <stdlib.h>
#include ABS
#endif 
#if !defined(FALL) 
#define FALL "all_funk.h"
#include FALL
#endif 

int f2(int m[], int size) {
	int sum = 0;
	for(int i = f0(m, size); i < f1(m, size); i++) {
		sum += abs(m[i]);
	}
	return sum;
}