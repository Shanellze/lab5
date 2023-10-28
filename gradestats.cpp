#include <iostream>
#include <vector>

int main(){

    int x;
    int total = 0;
    double average;
    std::vector<int> nums;

    while (x != -1 || nums.size() != 100) {
        std::cout << "Enter grade (or -1 to end): ";
        std::cin >> x;

        if (x == -1) {
            break;
        } else {
            nums.push_back(x);
        }

    }

    for (int n : nums){
        total += x;
    } 

    average = total/nums.size();
    std::cout << "Average: " << average;  
    
}