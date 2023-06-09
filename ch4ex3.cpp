#include <iostream>
#include <algorithm>
#include <vector>
int main(){
    std :: vector <double> sequence ;
    double df;
    double sum;
    int value = 1;
    double smallest;
    double largest;
    double mean;
    std :: cout << "Give values that are distance between two cities:\n";
    while( std :: cin >>  df ){
        sum += df;
        sequence.push_back(df);
        if(value == 1){
            smallest = df;
            largest = df;
        }
        else{
            if(df < smallest){
                smallest = df;
            }
            else if (df > largest){
                largest = df;
            }        
        }
        value += 1;
    }
    mean = sum/sequence.size();
    std :: cout << "The sum of all distance is :\t"  << sum << std :: endl;
    std :: cout << "The smallest value is:\t" << smallest << std :: endl;
    std:: cout << "The largest value is :\t" << largest << std::endl;
    std :: cout << "The mean is:\t" << mean << std::endl;
}
