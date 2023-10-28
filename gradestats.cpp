#include <iostream>

int main(){

    int x;
    int count=0;
    int total;
    double average;

    do{
    std::cout << "Enter grade (or -1 to end): ";
    std::cin >> x;
    count++;
    total += x;
    } while ((x != -1)||(count != 100));

    average = total/count;
    std::cout << "Average: " << average;  
    
}