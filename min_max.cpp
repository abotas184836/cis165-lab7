#include <iostream>

int main()
{
    int number;
    int smallest;
    int largest;
    
    std::cout << "Enter integers (-99 to stop): ";
    std::cin >> number;
    
    if ( number == -99 ) {
        std::cout << "No data values were entered." << std::endl;
    }
    else {
        smallest = number;
        largest = number;
        
        while ( number != -99 ) {
            if ( number > largest ) {
                largest = number;
            }
            
            if ( number < smallest ) {
                smallest = number;
            }
            
            std::cout << "Enter integers (-99 to stop): ";
            std::cin >> number;
        }
        
        std::cout << "Smallest value: " << smallest << "; Largest value: " << largest << std::endl;
    }
    
    return 0;
}
