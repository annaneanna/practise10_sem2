#include <string> 
#include <vector> 
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++)
	{
		cout << "[" + to_string(i) + "]: address=" << arr + i << "\tvalue=" << *(arr + i) << endl;
	}
}