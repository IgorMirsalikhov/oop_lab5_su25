#include "HugeInt.h"
#include <string>
#include <iostream>

//constructor that converts a character string representing a large integer number
//into HugeInt object

HugeInt::HugeInt(const std::string& number) {
    this->numberOfDigits = number.size();
    integer = new short[numberOfDigits];

    for(int i = numberOfDigits - 1; i >= 0; i--) {
        integer[i] = number.at(i) - '0';
    }
}

HugeInt::HugeInt(unsigned numberOfDigits) {
    this->numberOfDigits = numberOfDigits;
    integer = new short[numberOfDigits];
    for(int i = 0; i < numberOfDigits; i++) {
        integer[i] = 0;
    }
}

//destructor
HugeInt::~HugeInt() {
    delete [] integer;
}

//copy constructor
HugeInt::HugeInt(const HugeInt& other) {
    numberOfDigits = other.numberOfDigits;
    integer = new short[numberOfDigits];
    for(int i = 0; i < numberOfDigits; i++) {
        integer[i] = other.integer[i];
    }
}

//accessor function
int HugeInt::getNumberOfDigits(void) const {
    return numberOfDigits;
}

//output the HugeInt number
void HugeInt::display() const {
    bool comma = (numberOfDigits >= 6) ? true : false;

    for (int i = 0; i < numberOfDigits; i++) {
        if (comma && i % 3 == 0 && i != numberOfDigits - 1 && i != 0) {
            std::cout << ',';
        }
        std::cout << integer[i];
    }
    std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& out, const HugeInt& num) {
    bool comma = (num.getNumberOfDigits() >= 6) ? true : false;

    for (int i = 0; i < num.getNumberOfDigits(); i++) {
        if (comma && i % 3 == 0 && i != num.getNumberOfDigits() - 1 && i != 0) {
            out << ',';
        }
        out << num.integer[i];
    }
    out << std::endl;
    
    return out;
}

/***PART 1***/
//Finish the implementation of the operator = 
HugeInt& HugeInt::operator=(const HugeInt& other) {
    numberOfDigits = other.numberOfDigits;
    integer = other.integer; //change this line and allocate memory dynamicaly
    for(int i = 0; i < numberOfDigits; i++) {
        //copy all the elements here
    }

    return *this;
}

/***PART 2***/
//equality operator 
//implementation goes here


/***PART 3***/
//operator <
bool HugeInt::operator<(const HugeInt& other) const {
//implementation goes here
return false;
}

/***PART 4***/
//**********START OF RELATIONAL OPERATORS*************

bool HugeInt::operator>(const HugeInt& other) const {
//implementation goes here
return false;
}

bool HugeInt::operator<=(const HugeInt& other) const {
//implementation goes here
return false;
}

bool HugeInt::operator!=(const HugeInt& other) const {
//implementation goes here
return false;
}

bool HugeInt::operator>=(const HugeInt& other) const {
//implementation goes here
return false;
}
//**********END OF RELATIONAL OPERATORS*************

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+(const HugeInt& op2) const {
//implementation goes here
return HugeInt();
} 
