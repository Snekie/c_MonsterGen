//1st sem : In honor of tomorrow's potential snowstorm, we're going to code some ASCII snow!Create a for loop that runs 10, 000 times.
//In it print a snowflake(*).Then, still inside this for loop, create a second nested for loop that runs a random number of times - 
//between 0 and 80 times, and prints out a single space.Run your code, and feel free to tweak the numbers once it's running.



#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10000; i++) {
		cout << "*";
	
		for (int i = 0; i < rand() % 7000; i++) 
			cout << "  ";
		}
		
}