#include <iostream>
int main() {
    double num1, smallest,largest;
    bool firstinput = true;
    std :: string unit;
    double cm = 1;
    double metres = 100;
    double inches = 2.54;
    double feet = 12*2.54;
    double sum = 0;
    double values = 0;
    while (true) {
        std :: cout << "Enter a value or press | to terminate" << std:: endl;
        std :: cout << " After giving value,Enter an unit(cm,in,m,ft)" << std::endl;
        if (!(std ::cin >> num1)|| num1 == '|'||!(std::cin >> unit)){
            break;
        }
        if (firstinput == true){
            if(unit == "cm"){
                smallest = num1;
                largest = num1;
                sum += num1;
                values += 1; 
            }
            else if (unit == "m")
            {
                smallest = num1*metres;
                largest = num1*metres;
                sum += num1*metres;
                values += 1;
            }
            else if (unit == "in"){
                smallest = num1*inches;
                largest = num1*inches;
                sum += num1*metres;
                values += 1;
            }
            else if(unit == "ft"){
                smallest = num1*feet;
                largest = num1*feet;
                sum += num1*metres;
                values += 1;
            }
            else{
                std :: cout << "Wrong unit value" << std:: endl;
            }
            firstinput = false;  
        }
        else{
            if ((smallest > num1) && unit == "cm"){
                smallest = num1;
                sum += num1;
                values += 1;
            }
            else if ((largest < num1) && unit == "cm"){
                largest = num1;
                sum += num1;
                values += 1;
            }
            else if ((smallest > num1) && unit == "m"){
                smallest = num1*metres;
                sum += num1*metres;
                values += 1;
            }
            else if ((largest < num1) && unit == "m"){
                largest = num1*metres;
                sum += num1*metres;
                values += 1;
            }
            else if ((smallest > num1) && unit == "in"){
                smallest = num1*inches;
                sum += num1*inches;
                values += 1;
            }
            else if ((largest < num1) && unit == "in"){
                largest = inches;
                sum += num1*inches;
                values += 1;
            }
            else if ((smallest > num1) && unit == "ft"){
                smallest = num1*feet;
                sum += num1*feet;
                values += 1;
            }
            else if ((largest < num1) && unit == "ft"){
                largest = num1*feet;
                sum += num1*feet;
                values += 1;
            }
            else{
                if(unit == "cm"){
                sum += num1;
                values += 1;
            }
            else if (unit == "m")
            {
                sum += num1*metres;
                values += 1;
            
            }
            else if (unit == "in"){
                sum += num1*metres;
                values += 1;
            }
            else if(unit == "ft"){
                sum += num1*metres;
                values += 1;
            }
            else{
                std :: cout << "Wrong unit value" << std::endl;
            }     
            } 
            std :: cout << "The largest value so far(values in cm)\t" << largest << std::endl;
            std :: cout << "The smallest value so far(values in cm)\t" << smallest << std::endl;
            std :: cout << "The sum is:\t" << sum << std::endl;
            std :: cout << "The number of values is :\t" << values << std::endl;

        }
    }
    std :: cout << "Program terminated.\n" << std::endl;
    return 0;
}





