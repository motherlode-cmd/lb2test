#include <stdio.h>
#if !defined(FALL) 
#define FALL "all_funk.h"
#include "all_funk.h"
#endif 

int main() {
	int a;
	int m[100];
	int size = 0;
	int temp;
	scanf("%d", &a);
	while(scanf("%d", &temp) == 1) {
		m[size++] = temp;
	}
	int answer;
 switch(a) {
    case(0):
        answer = f0(m, size);
        break;
    case(1):
        answer = f1(m, size);
        break;
    case(2):
        answer = f2(m, size);
        break;
    case(3):
        answer = f3(m, size);
        break;
    default:
        printf("Данные некорректны");
 }
 printf("%d\n", answer);

 return 0;
}