#if !defined(FALL) 
#define FALL "all_funk.h"
#include "all_funk.h"
#endif 

int f1(int m[], int size) {
	for(int i = size - 1; i >= 0; i--) {
		if(m[i] % 2 != 0) {
			return i;
		}
	}
	return -1;
}