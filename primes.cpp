#include <iostream>


int main(){

    int number;

    //Asks for the user input
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    bool isPrime = true;

    std::cout << "Primes to " << number << " are: ";
    for (int i = 0; i<= number; i++) {
        isPrime = true;

        if (i <= 1)
            isPrime = false;

        for (int j = 2; j<= i/2; j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }

        if (isPrime) {
            std::cout << i << " ";
        }
    }

return 0;
}