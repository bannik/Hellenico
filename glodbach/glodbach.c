#include <stdio.h>

isPrime( a ){
	int i;
	prime = true;

	for ( i = 2; i < a; ++i ){
		if (a % i == 0 && a =! i){
			prime = false;
			break;
		}
	}
	return prime;
}
main(){
	FILE *in = fopen("glodbach.in", "r");
	FILE *out = fopen("glodbach.out", "w");
	int n;
	int a = 2, b = 2;
	int i;
	bool done = false;

	fscanf(in, "%d", &n);
	
	b = n - 1;

	while(!done){
        if(isPrime( a )){
		b = n - a;
		if (isPrime( b )){
			if (a + b == n && isPrime(a) && isPrime(b)){
				done = true;
				break;
			}
		}
    }
    ++a;
    }
    fprintf(out, "%d %d", a b);
    fclose(in);
    fclose(out);
return 0;
}
