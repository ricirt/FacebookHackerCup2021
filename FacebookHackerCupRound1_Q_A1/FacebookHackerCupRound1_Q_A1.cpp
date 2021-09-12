#include<iostream>
#include<map>
#include <cstring>
#include<vector>

using namespace std;
int CalculatorHandChange(string);
int main() {
	
	cout<<CalculatorHandChange("FXXFXFOOXF");//3
}

int CalculatorHandChange(string inputString) {
	int counter = 0;
	char temp = '\0';
	char arr[1024];
	strncpy_s(arr, inputString.c_str(), sizeof(arr));
	arr[sizeof(arr) - 1] = 0;

	for (int i = 0; i < inputString.size(); i++) {
		if (arr[i] == 'F' || arr[i] == temp) 
		{
			continue;
		}
		if (arr[i] == 'X') {
			temp = 'X';
		}		
		else if (arr[i] == 'O') {
			temp = 'O';
		}
		counter++;//3
		
	}
	return counter-1;
}