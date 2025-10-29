#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
#include <string>

class HugeInt {
public:
    //user-defined constructors
    HugeInt(const std::string& number = "0");
    HugeInt(unsigned numberOfDigits);
    //destructor
    ~HugeInt();
    //Copy constructor header
    HugeInt(const HugeInt& other);
    //accessor function
    int getNumberOfDigits(void) const;
    //display function
    void display() const;

    //operator << 
    friend std::ostream& operator<<(std::ostream& out, const HugeInt& num);

    /******PART 1******/
    //Operator =
    HugeInt& operator=(const HugeInt& other);
    
    /******PART 2******/
    //Write operator == prorotype here
      // equality operator

    /*****PART 3******/
    bool operator<(const HugeInt& other) const;

    /*****PART 4******/
    //relational and equality operator
    bool operator>(const HugeInt & ) const; // greater than operator
    bool operator!=(const HugeInt & ) const; // inequality operator
    bool operator<=(const HugeInt & ) const; 
    bool operator>=(const HugeInt & ) const;

    /*****BONUS PART******/
    // addition operator;
    HugeInt operator+(const HugeInt& other) const;


private:
    unsigned numberOfDigits;
    short* integer;
};

#endif
