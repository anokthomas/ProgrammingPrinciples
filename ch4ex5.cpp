#include <iostream>
int main(){
    double num1;
    double num2;
    char oper;
    double value;
    std :: cout << "Enter first operand:";
    std :: cin >> num1;
    std :: cout << "Enter second operand:";
    std :: cin >> num2;
    std :: cout << "enter operation:";
    std:: cin >> oper;
    if(oper == '+'){
        value = num1 + num2;
    }
    else if(oper == '-'){
        value = num1 - num2;
    }
    else if(oper == '*'){
        value = num1*num2;
    }
    else if(oper == '/'){
        value = num1/num2;
    }
    else{
        std:: cout <<"Wrong output";
    }
    std :: cout << "The operation of " << num1 << "\t" << oper << "\t" << num2 << "\tis\t" << value << std :: endl; 

}