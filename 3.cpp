#include <iostream>

int main() {
    int x, y;
    
    std::cout << "enter (x): ";
    std::cin >> x;
    std::cout << "Enter  (y): ";
    std::cin >> y;
    
    std::cout << "Sum (x + y): " << x + y << std::endl;
    std::cout << "Difference (x - y): " << x - y << std::endl;
    std::cout << "Product (x * y): " << x * y << std::endl;
    
    return 0;
}
