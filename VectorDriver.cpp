// Modified by Jacob Williams
// for COSC 2030 lab 4

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "-------------------------------------------" << endl;
  cout << "Question 1: fill_vector()" << endl << endl;
  cout << "-------------------------------------------" << endl;
  cout << "First we create an empty vector" << endl;
  vector<short> firstVec;
  print(firstVec);
  cout << endl;
  cout << "And then we fill it with TEN RANDOM NUMBERS" << endl;
  add_numbers(firstVec);
  print(firstVec);
  cout << "Adding more random numbers makes the vector longer:" << endl;
  add_numbers(firstVec);
  print(firstVec);
  cout << endl << endl;

  cout << "-------------------------------------------" << endl;
  cout << "Question 2: print_even()" << endl << endl;
  cout << "-------------------------------------------" << endl;
  cout << "We'll print out only the even entries of firstVec (including the zeroth entry)." << endl;
  print_even(firstVec);
  cout << endl << endl; 

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}
