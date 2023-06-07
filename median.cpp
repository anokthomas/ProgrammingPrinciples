#include <iostream>
#include <algorithm>
#include <vector>
int main(){
    std :: vector <double> numbers;
    std :: cout << "Enter terms(enter any non-numeric character to stop)\n";
    int middleindex;
    int middleelement;
    for(double unit; std :: cin >> unit;){
        numbers.push_back(unit);
    }
    int x = numbers.size();
    std :: sort(numbers.begin(),numbers.end());
    if(x%2 != 0){
         middleindex = x/2;
         middleelement = numbers.at(middleindex);
    }
    else{
        middleindex =x/2;
        middleelement = (numbers.at(middleindex) + numbers.at(middleindex - 1))/2;
    }
    std :: cout << "The median is :" << "\n" << middleelement;


}