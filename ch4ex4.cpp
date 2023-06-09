#include <iostream>
int main(){
    std :: cout << "Think of a number between 1-100" << std :: endl;
    int min = 1;
    int max = 100;
    int avg;
    std :: string ans;
    for(int i = 0;i <=7;i++){
        avg = (min + max)/2;
        std :: cout << "Is number higher or equal to(y/n)" << avg << std::endl;
        std :: cin >> ans;
        if(ans == "Y" || ans == "y"){
            min = avg + 1;
        }
        else  {
            max = avg -1;
        }
    }
    std::cout <<"Your number is:\t" << avg << std::endl;
}