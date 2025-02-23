/*
Author: Mohammed Uddin
Course: CSCI-135
Assignment: E4.8

A program that reads a word and prints each word on a seperate line.

User Input: "Hey"
Output:
H
e
y
*/

/*
Author: Mohammed Uddin
Course: CSCI-135
Assignment: E4.8

A program that reads a word and prints each character on a separate line.

User Input: "Hey"
Output:
H
e
y
*/

#include <iostream>
using namespace std;

int main()
{
  string word_taker;

  cout << "Enter a word: ";
  getline(cin, word_taker);

  for (int i = 0; i < word_taker.size(); i++) {
    cout << word_taker[i] << "\n";
  }

  return 0;
}
