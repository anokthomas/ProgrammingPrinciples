#include <iostream>
#include <vector>
#include <random>
int randomgenerator(){
std :: vector <int> numbers = {1,0,3,0,3,1,0,3};
// Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    
// Create a uniform distribution for indices in the range [0, size of vector - 1]
std::uniform_int_distribution<> dist(0, numbers.size() - 1);
// Get a random index from the distribution
int randomIndex = dist(gen);
// Access the element at the random index
    int randomElement = numbers[randomIndex];
return randomElement;    
}
void game(){
    std :: string inp;
    int a;
    int b;
    std :: cout << "While playing give input as : Rock,Paper,Scissor,exit" << std:: endl;
    while(true){
    std :: cout << "Give input:(Exit type- exit)" << std::endl;
    std ::  cin  >> inp;
    if(inp == "Rock"){
        a = 1;
        b = randomgenerator();
        switch(b){
            case 1:{
                std :: cout << "Computer choice:\t" << "Rock" << std::endl;
                std :: cout << "It is a Draw!" << std::endl;
                break;
            }
            case 0:{
                std :: cout << "Computer choice:\t" << "Paper" << std::endl;
                std :: cout << "Computer wins!" << std::endl;
                break;
            }
            case 3:{
                std :: cout << "Computer choice:\t" << "Scissor" << std::endl;
                std :: cout << "You win!" << std::endl;
                break;
            }}


    }
    else if(inp == "Scissor"){
        a = 3;
        b = randomgenerator();
        switch(b){
            case 1:{
                std :: cout << "Computer choice:\t" << "Rock" << std::endl;
                std :: cout << "Computer wins!" << std::endl;
                break;
            }
            case 0:{
                std :: cout << "Computer choice:\t" << "Paper" << std::endl;
                std :: cout << "You win!" << std::endl;
                break;
            }
            case 3:{
                std :: cout << "Computer choice:\t" << "Scissor" << std::endl;
                std :: cout << "It is a Draw!" << std::endl;
                break;
            }}}
    else if(inp == "Paper"){
        a = 0;
        b = randomgenerator();
        switch(b){
            case 1:{
                std :: cout << "Computer choice:\t" << "Rock" << std::endl;
                std :: cout << "You win!" << std::endl;
                break;
            }
            case 0:{
                std :: cout << "Computer choice:\t" << "Paper" << std::endl;
                std :: cout << "It is a Draw!" << std::endl;
                break;
            }
            case 3:{
                std :: cout << "Computer choice:\t" << "Scissor" << std::endl;
                std :: cout << "Computer wins!" << std::endl;
                break;
            }}}
    else{
        break;}}}
int main(){
    std :: string y;
    std :: cout << "Shall we play Rock,Paper,Scissors:(y/n)" << std :: endl ;
    std :: cin >> y;
    if (y == "y"){
        game();}
        std::cout <<"Thank you for playing" << std::endl;}