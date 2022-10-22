# include <iostream>
using namespace std;

int main() {

a :

  char op;
  float num1, num2;

  cout << "Pilih Operasi: +, -, *, /: ";
  cin >> op;

  cout << "";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
	  cout << endl;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
	  cout << endl;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
	  cout << endl;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
	  cout << endl;
      break;

    default:
      cout << "Input Salah !" << endl;
	  goto a;
      break;
  }

  goto a;

  return 0;
}
