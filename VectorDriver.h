/* File: VectorDriver.h
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */

// Edited by Jacob Williams
// for COSC 2030 
// on October 8, 2018

typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <cstdlib>           // for random number
#include <algorithm>        // for sorting

using std::cout;
using std::endl;
using std::vector;
using std::sort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// Add ten random numbers to the vector.
void add_numbers(vector<short> &data) {
    for (int i = 0; i < 10; i++) {
        data.push_back(rand());
    }
    return;
}


// Print the even-numbered entries (starting with the zeroth).
void print_even(const vector<short> &data) {
    if (data.empty()) {
        cout << "<empty>";
    } else {
        cout << "<" << data.at(0);
        if (data.size() >= 2) {
            for (ulong i = 2; i < data.size(); i += 2) {
                cout << ", " << data.at(i);
            }
        }
    cout << ">";
    }
}

// Return TRUE if given value is in the vector, FALSE otherwise
bool is_present(const vector<short> &data, short value) {
  std::vector<short>::const_iterator iter = data.begin();   // The iterator
  while (iter != data.end()) {
      if (*iter == value) {
          return true;
      } else {
          iter++;
      }
    }
  return false;
}

// Return TRUE if the vector is sorted (ascending order), FALSE otherwise
bool is_sorted(const vector<short> &data) {
  std::vector<short>::const_iterator first = data.begin();   // The iterator
  std::vector<short>::const_iterator second = (data.begin())++;
  while (second != data.end()) {
      if (*first > *second) {
          return false;
      } else {
          first = second;
          second++;
      }
  }
  return true;
}
