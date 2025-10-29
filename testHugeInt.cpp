#include <iostream>
#include "HugeInt.hpp"

void f(HugeInt n) {
    HugeInt temp1, temp2;
    temp1 = temp2 = n;
    std::cout << temp1;
}

int main() {
    
    //PART 1 TEST
    // HugeInt n1("20234123523");
    // f(n1);
    // std::cout << "Test 1 is passed" << std::endl;
 
    //PART 2 TEST
    // HugeInt n2("20234123233");
    // HugeInt n3(n2);
    // std::cout << (n1 == n2) << std::endl;
    // std::cout << (n1 == n3) << std::endl;
    // std::cout << (n3 == n2) << std::endl;
    // std::cout << "Test 2 is passed" << std::endl;

    //PART 3 TEST
    // HugeInt n4("423"), n5("4235"), n6("4234");
    // std::cout << (n6 < n5) << std::endl;
    // std::cout << (n4 < n5) << std::endl;
    // std::cout << (n6 < n4) << std::endl;
    // std::cout << "Test 3 is passed" << std::endl;

    //PART 4 TEST
    // std::cout << (n6 != n5) << std::endl;
    // std::cout << (n5 <= n4) << std::endl;
    // std::cout << (n6 >= n4) << std::endl;
    // std::cout << (n4 > n5) << std::endl;
    // std::cout << "Test 4 is passed" << std::endl;

    //BONUS PART TEST
    // HugeInt n7 = n5 + n6;
    // std::cout << n7;
    // n7 = n7 + n4;
    // std::cout << n7;
    // n7 = n7 + n7;
    // std::cout << n7;
    // std::cout << "Test bonus is passed" << std::endl;
    
    return 0;
}
