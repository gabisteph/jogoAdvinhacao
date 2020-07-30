#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);

	for(int i=1;i<=10;i++){
        int mult = a*i;
		printf("%d x %d = %d\n", a, i, mult);
    }

}