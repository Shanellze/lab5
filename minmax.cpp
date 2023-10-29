#include <iostream>
#include <vector>

int main(){
    int min = 100;
    int max = 0;
    int x;
    std::vector<int> nums;

    for (int i=0; i<10; i++){
        x = 1 + (rand() % 100);
        nums.push_back(x);

        if (max == 0){
            max = x;
        } else if (x >= max){
            max = x;
        } else if ( min == 100){
            min = x;
        } else if (x <= min){
            min = x;
        }
    }
    
    for (int n : nums){
        std::cout << n << " ";
    } 
    std::cout << std::endl;
    std::cout << "The minimum is " << min << " and the maximum is " << max;
    
}
