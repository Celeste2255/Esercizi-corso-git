/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

void main() {

  int a, b, sum;
  
  cout << "Inserire un numero" ;
  cin>>a;
  cout << "Inserire secondo numero" ;
  cin >> b;

  
  sum = a + b ;

  cout << "La somma dei due numeri è: " << sum ;
  
return 0;

}