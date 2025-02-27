// Name: Robert Koenig
// Section 011

#include "HashMap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
 * hashNode contructor with 1 input
 * input: 1 string
 * output: not applicable
 * *This function does allocate memory
 */
hashNode::hashNode(string s) {
    keyword = s;
    values = new string[100];
    valuesSize = 100;
    currSize = 0;
    srand(time(nullptr));
}

/*
 * hashNode contructor with no input
 * input: none
 * output: not applicable
 * *This function does allocate memory
 */
hashNode::hashNode() {
    keyword = "";
    values = new string[100];
    valuesSize = 100;
    currSize = 0;
    srand(time(nullptr));
}

/*
 * hashNode contructor with 2 input
 * input: 2 strings
 * output: not applicable
 * *This function does allocate memory
 */
hashNode::hashNode(string s, string v) {
    keyword = s;
    values = new string[100];
    values[0] = v;
    valuesSize = 100;
    currSize = 1;
}

/*
 * hashNode deconstruct
 * input: none
 * output: not applicable
 * *This function does deallocate memory
 */
hashNode::~hashNode() {
    delete [] values;
}

/*
 * addValue function
 * input: 1 string1
 * output: none
 * This function adds duplicated values to their value list
 */
void hashNode::addValue(string v) {
    if (currSize >= valuesSize) {
        dblArray();
    }
    values[currSize] = v;
    currSize++;
}

/*
 * dblArray function
 * input: none
 * output: none
 * This function doubles the map size
 */
void hashNode::dblArray() {
    // when the value array gets full, you need to make a new
    // array twice the size of the old one (just double, no
    //going to next prime) and then copy over the old values
    //to the new values, then de-allocate the old array.
    //Again, just copying over, no hash functiosn involved
    //here.
    string* temp = new string[valuesSize*2];
    for (int i=0; i<valuesSize; i++) {
        temp[i] = values[i];
    }
    delete [] values;
    values = temp;
    valuesSize = valuesSize*2;
}

/*
 * getRandValue function
 * input: none
 * output: 1 string
 * This function returns a random element of the map
 */
string hashNode::getRandValue() {
    //Every key has a values array - an array of words that
    // follow that key in the text document.  You're going to
    //randomly select one of those words and return it.  That
    //will be the word that follows your key in your output
    //function, and it will also be the next key.
    // Seed the random number generator
    if (currSize == 0) {
        return "";
    }
    int temp = rand() % currSize;
    return values[temp];
}
