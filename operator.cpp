#include <iostream>
using namespace std;

int main(){
	//Unary operasi bilangan yang melibatkan satu variabel
	int x = 5;
	x++; //increment nilai dari variabel x bertambah 1 sama artinya dengan x = x + 1
	cout << x << endl; // x = 6
	x--; //decrement nilai dari variabel x berkurang 1 sama artinya dengan x = x - 1
	cout << x << endl; // x = 5
	x = -5;
	cout << x << endl; // x = -5
	bool status = !false; //Negasi 
	cout << status << endl << endl; //output menghasilkan true (1)
	
	//Binary operasi yang melibatkan dua variabel
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
	//Logical Operator
	cout << (true && false) << endl; //false a n b
	cout << (true || false) << endl; //true  a v b
	
	
	//Ternary
	int num1 = 4;
	(num1 < 5) ? cout << "angka lebih kecil dari 5" : cout << "angka lebih besar dari 5";
}
