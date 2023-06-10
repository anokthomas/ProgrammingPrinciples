#include <iostream>
#include <vector>
int main(){
    std :: vector <std:: string> numbers {"zero","one","two","three","four","five","six","seven","eight","nine"};
     int num; 
     std :: cout << "enter number(to exit enter any alphabet)" << std:: endl;
     while(std::cin >> num){
            std :: cout << "\n" << numbers[num] << std :: endl;
     }



    
}