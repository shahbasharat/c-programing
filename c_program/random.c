#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

	// Providing a seed value
	srand((unsigned) time(NULL));

	// Get a random number
	int random = rand();

	// Print the random number
	cout<<random<<endl;

	return 1;
}