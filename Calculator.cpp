#include <iostream>
#include <cmath> 
#include <string>
// Main fucntion
int main() {
 //Declaring inputs 
 double a, b,c;
 char sign;
//Prompting output and input variables
    std::cout << "Enter the operation +,-,* and /   ";
    std::cin >> sign;
    std::cout <<"Enter the operands a and b : ";
 //Using switch to scope which operation to be chosed based on  the input
 switch (sign){
     case '+': 
        std::cin >> a >> b;  
        c=a+b;
        std::cout << "Result of Addition " << c << std::endl; 
        break; 
     case '-': 
        std::cin >> a >> b;  
        c=a-b;
        std::cout << "Result of Subtraction " << c << std::endl; 
        break; 
        case '*': 
        std::cin >> a >> b;  
        c=a*b;
        std::cout << "Result of Multiplication " << c << std::endl; 
        break; 
        case '/': 
        std::cin >> a >> b;  
        c=a/b;
        std::cout << "Result of Division " << c << std::endl; 
        break; 
     default: 
        std:: cout<< "Please enter the correct operations \n"; 
     }

    return 0;
}
