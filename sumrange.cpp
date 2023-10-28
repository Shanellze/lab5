#include <iostream>

int main(){
    int x;
    int y;
    int ans = 0;

    std::cout << "Enter 2 numbers: ";
    std::cin >> x >> y;

    for (int i=x; i<=y; i++){
        ans += i;

    }

std::cout << "Sum from " << x << " to " << y << " is " << ans;

}