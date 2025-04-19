# include <stflib.h>
# include <stdbool.h>
# include <stdio.h>

bool P (int x){
	return x%2 == 0;
}

void print_pair ( int XT[10], bool(*predicate)(int)){
	for (int i =0 , i<10, i++){
		if (predicate(XT[i]) ==0) return XT[i];
	}
}void main(void){
	T[10]= [0,1,2,3,4,5,6,7,8,9];
	printf(pint_pair(T, p));
	return 0;
	
}
