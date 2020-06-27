#include <iostream>
using namespace std;

int main(){
	//Unary
	int x = 5;
	x++; //increment nilai x bertambah 1
	cout << x << endl; // x = 6
	x--; //decrement nilai x berkurang 1
	cout << x << endl; // x = 5
	x+=2; //increment nilai x bertambah 2
	cout << x << endl; // x = 7
	x-=2; //decrement nilai x bekurang 2
	cout << x << endl;
	x*=2; //increment nilai x dikali 2;
	cout << x << endl << endl;
	
	//Binary
	int a = 7;
	int b = 3;
	//Arithmetic operator
	cout << "a + b = " << a + b << endl; 
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl << endl;
	//Relational operator
	cout << "a == b = " << (a == b) << endl; 
	cout << "a != b = " << (a != b) << endl;
	cout << "a > b = " << (a > b) << endl;
	cout << "a >= b = " << (a >= b) << endl;
	cout << "a < b = " << (a < b) << endl;
	cout << "a <= b = " << (a <= b) << endl << endl;
	
	
	//Ternary
	int num1 = 4;
	(num1 < 5) ? cout << "angka lebih kecil dari 5" : cout << "angka lebih besar dari 5";
}
