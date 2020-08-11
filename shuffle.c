// @Author Scott Holden
// Shuffle Implementation for PureWeb
// 
// Input integer N
// Output integer 1 ... N in random order.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// returns random integer in [n,m]
int randomNum(int n, int m){
	return (rand() % (m - n)) + n;
}
int main(int argc, char *argv[]) {
	
	if (argc == 2){
		int n = atoi(argv[1]);
		int arr[n];
		
		// initialize array of 1 ... N
		for (int i = 0; i < n; i++){
			arr[i] = i + 1;
		}
		
		srand(time(0));
		// shuffle array
		for (int i = 0; i < n-2 ; i++){
			int j = randomNum(i, n);
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		
		// print randomly shuffled array
		for (int i = 0; i < n ; i++){
			printf("%d \n", arr[i]);
		}
	}
	return 0;
}

