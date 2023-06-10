#include <iostream>
#include <vector>
std :: vector <std::string> numbers;
void initialize_numbers(){
       numbers.push_back("zero");
       numbers.push_back("one");
       numbers.push_back("two");
       numbers.push_back("three");
       numbers.push_back("four");
       numbers.push_back("five");
       numbers.push_back("six");
       numbers.push_back("seven");
       numbers.push_back("eight");
       numbers.push_back("nine");}
int get_number(){
       double val;
       std :: cout << "enter operand:" << std::endl;
       if (std :: cin >> val)return val;
       std :: cin.clear();
       std::string s;
       std :: cin >> s;
       for(double i = 0;i < numbers.size();i++){
              if(numbers[i] == s){
                     val = i;
                     return val;
              }
              }}
int main(){
       initialize_numbers();
       double val1 = get_number();
       double val2 = get_number();
       char oper;
       double result;
       std :: cout << "Enter the operation" << std :: endl;
       std :: cin >> oper;
       switch(oper){
              case '+':
			result = val1 + val2;
                     std :: cout <<"The sum is:\t" << result;
                     break;
		case '-':
			result = val1-val2;
                     std :: cout <<"The difference is:\t"<< result;
                     break;
		case '*':
                     result = val1*val2;
                     std :: cout <<"The product is :\t"<<result;
                     break;
		case '/':
                     result = val1/val2;
                     if(val2 == 0){
                            std:: cout <<"not possible"<<std::endl;
                            break;}
                     std :: cout << "The divison is:\t" << result << std::endl;
                     break;
		default:
              std::cout <<"wrong input"<<std::endl;
       }


}