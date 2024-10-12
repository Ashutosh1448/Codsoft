#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    std::cout<<"Enter guess limit : ";
    int lim; std::cin>>lim;
    srand( time(0) ^ clock() );
    const int num = rand() % lim;
    while(true)
    {
        std::cout<<"Enter your Guess : ";
        int guess; std::cin>>guess;
        if(guess < num)
        {
            std::cout<<"Your guess is too small, please retry ";
            continue;
        }
        else if(guess > num){
            std::cout<< "Your guess is too large, please retry ";
            continue;
        }
        else{
            std::cout<<"you have guessed correctly!\n";
            break;
        }
    }
    return 0;
}