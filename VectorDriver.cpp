// Modified by Jacob Williams
// for COSC 2030 lab 4

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "-------------------------------------------" << endl;
  cout << "Question 1: fill_vector()" << endl;
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
  cout << "Question 2: print_even()" << endl;
  cout << "-------------------------------------------" << endl;
  cout << "We'll print out only the even entries of firstVec (including the zeroth entry)." << endl;
  print_even(firstVec);
  cout << endl << endl; 

  cout << "-------------------------------------------" << endl;
  cout << "Question 3: is_present()" << endl;
  cout << "-------------------------------------------" << endl;
  cout << "Let's create a vector with known values 0, 2, 4, 6, 8, 10." << endl;
  vector<short> secondVec;
  for (short i = 0; i <= 10; i += 2) {
      secondVec.push_back(i);
  }
  cout << "secondVec = ";
  print(secondVec);
  cout << endl;
  cout << "Searching for 6. Is 6 present?  " << is_present(secondVec,6) << endl;
  cout << "Searching for 1. Is 1 present?  " << is_present(secondVec,1) << endl;
  cout << endl << endl;


  cout << "-------------------------------------------" << endl;
  cout << "Question 4: sort the vector" << endl;
  cout << "-------------------------------------------" << endl;
  cout << "We'll create a random vector again." << endl;
  vector<short> thirdVec;
  add_numbers(thirdVec); // Random, hence usually not sorted
  cout << "Our vector: ";
  print(thirdVec);
  cout << endl;
  cout << "We can sort this using the sort() routine in the STL!" << endl;
  cout << "(We use the default behavior, which is ascending sort.)" << endl;
  sort(thirdVec.begin(), thirdVec.end());
  cout << "The sorted vector: ";
  print(thirdVec);
  cout << endl;
  cout << "We have a function to test if it's sorted." << endl;
  cout << "Is thirdVec sorted? " << is_sorted(thirdVec) << endl << endl;

  


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
