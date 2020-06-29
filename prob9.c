
//to find pyth triples take 2 numbers: m and n, m<n, and find 2mn, n^2-m^2, and n^2+m^2
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void gen(){
	int m,n, a,b,c,sum;
	for(m=1; ; m++){
		printf("m:%d\n", m);
		for(n=m+1;   ; n++){
			printf("n: %d\n", n);
			a=pow(n, 2)-pow(m, 2);
			b=(2*m)*n;
			c=pow(n, 2)+pow(m, 2);

			printf("pre-swap:\na is: %d \nb is: %d \nc is: %d\n\n", a, b, c);

			//check for swap:
			if((a>b) && (b<c)){
				int temp;
				temp = b;
				b = a;
				a = temp;
			}
			printf("a is: %d \nb is: %d \nc is: %d\n\n", a, b, c);
		

			sum = (a + b) + c;
			printf("sum: %d\n", sum);
			printf("==========================\n");

			if(sum == 1000){
				printf("sum is 1000");
				exit(0);
			}
		}
		
		/*if(n==10){
			return;
		}*/
	}


}

int main(){
	gen();
}