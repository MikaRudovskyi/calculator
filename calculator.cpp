#include <iostream>

using namespace std;

void menu(){
	cout << "Welcome, dear user! This is a simple calculator in C++." << endl;
		
	cout << "=======================================================" << endl;
	cout << "Select one of the operations: " << endl;
	cout << "1. Sum" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit" << endl;
	cout << "=======================================================" << endl;
		
	cout << "-> ";
}

void lines(){
	cout << "=======================================================" << endl;
}

void sumOfNum(int arr[]){
	int size;
	cout << "Enter how many digits to sum: " << endl;
	cin >> size;
			
	cout << "Enter the numbers to be summed: " << endl;
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
			
	int sumOfNum = 0;
			
	for(int i = 0; i < size; i++){
		sumOfNum = sumOfNum + arr[i];
	}
			
	cout << "Result: " << sumOfNum << endl;
}

void subOfNum(int arr[]){
	int size;
	
	cout << "Enter how many digits to calculate the subtraction: " << endl;
	cin >> size;
			
	cout << "Enter the numbers to calculate the subtraction: " << endl;
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
			
	int subOfNum = arr[0];
			
	for(int i = 1; i < size; i++){
		subOfNum -= arr[i];
	}
			
	cout << "Result: " << subOfNum << endl;
}

void multOfNum(int arr[]){
	int size;
	
	cout << "Enter how many digits to calculate the multiplication: " << endl;
	cin >> size;
			
	cout << "Enter the numbers to calculate the multiplication: " << endl;
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
			
	int multOfNum = 1;
			
	for(int i = 0; i < size; i++){
		multOfNum = multOfNum * arr[i];
	}
			
	cout << "Result: " << multOfNum << endl;
}

void divOfNum(int arr[]){
	int size;
	
	cout << "Enter how many digits to divide: " << endl;
	cin >> size;
			
	cout << "Enter the numbers to be divided: " << endl;
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
			
	float divOfNum = arr[0];
			
	for(int i = 1; i < size; i++){
		float arrDiv = arr[i];
		divOfNum /= arrDiv;
	}
			
	cout << "Result: " << divOfNum << endl;
}

int choosingOperation(){
	
	int operation = 0;
	
	int size;
	int arr[size];
	
	while(operation != 6)
	{
		menu();
		
		cin >> operation;
		
		switch(operation){
		case 1:
			lines();
			
			sumOfNum(arr);
			
			lines();
		break;
		case 2:
			lines();
			
			subOfNum(arr);
			
			lines();
		break;
		case 3:
			lines();
			
			multOfNum(arr);
			
			lines();
		break;
		case 4:
			lines();
			
			divOfNum(arr);
			
			lines();
		break;
		case 5:
			cout << "Bye bye!" << endl;
			return 0;
		break;
		default:
			cout << "Operation is invalid." << endl;
		}
	}
}

int main(){
	
	choosingOperation();
	
	return 0;
}
